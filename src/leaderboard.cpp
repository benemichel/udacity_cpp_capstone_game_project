#include "leaderboard.h"
#include <fstream>
#include <iostream>

#include <vector>

LeaderBoard *LeaderBoard::GetInstance() {
    if (_leaderBoard == nullptr) {
        _leaderBoard = new LeaderBoard();

    }

    return _leaderBoard;
}

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