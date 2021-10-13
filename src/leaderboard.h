#include <vector>
#include <string>


// singleton
class LeaderBoard {
    public:
        static LeaderBoard *GetInstance();
        std::vector<int> GetLeaderBoardScores();
        void WriteToLeaderBoard(int score);

    private:
        LeaderBoard();
        static LeaderBoard* _leaderBoard;
        std::string _filepath = "./leaderBoard.text";
        std::vector<int> _leaderBoardScores;

};