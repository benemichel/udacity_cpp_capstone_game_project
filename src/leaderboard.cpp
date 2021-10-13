#include "leaderboard.h"
#include <fstream>
#include <iostream>

#include <vector>
#include <algorithm>


LeaderBoard* LeaderBoard::_leaderBoard = nullptr;

LeaderBoard *LeaderBoard::GetInstance() {
    if (_leaderBoard == nullptr) {
        _leaderBoard = new LeaderBoard();

    }

    return _leaderBoard;
}

LeaderBoard::LeaderBoard() {}

std::vector<int> LeaderBoard::GetLeaderBoardScores(){

    
    std::ifstream leaderBoardFile;
    leaderBoardFile.open(_filepath);

    _leaderBoardScores.clear();
    if (leaderBoardFile) {
        std::string line;
        while (getline(leaderBoardFile, line)) {
            _leaderBoardScores.push_back(std::stoi(line));
        }
    }

    for (auto score : _leaderBoardScores) {
        std::cout << "score: " << score << "\n";
    }

}

void LeaderBoard::WriteToLeaderBoard(int score) {
    std::vector<int> newScores = _leaderBoardScores;
    newScores.push_back(score);
    std::sort(newScores.begin(), newScores.end());
    std::reverse(newScores.begin(), newScores.end());

    // write to file
    std::ofstream file;
    file.open(_filepath);
    
    for (int score : newScores) {
        file << score << "\n";
    }


}