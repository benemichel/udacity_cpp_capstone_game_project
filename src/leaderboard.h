#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <vector>
#include <string>


// singleton
class LeaderBoard {
    public:
        static LeaderBoard *GetInstance();
        std::vector<int> GetLeaderBoardScores();
        void WriteToLeaderBoard(int score);

        // LeaderBoard(const LeaderBoard&) = delete;
        LeaderBoard& operator=(const LeaderBoard&) = delete;
    

    private:
     
        static LeaderBoard* _leaderBoard;
        std::string _filepath = "./leaderBoard.text";
        std::vector<int> _leaderBoardScores;

};

#endif
