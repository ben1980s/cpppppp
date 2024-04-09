#include <string>
using namespace std;

string rps(const string& p1, const string& p2)
{
    if (p1 == "scissors" && p2 == "paper")
    {
        return "Player 1 won!";
    }
    else if (p1 == "scissors" && p2 == "rock")
    {
        return "Player 2 won!";
    }
    else if (p2 == "scissors" && p1 == "paper")
    {
        return "Player 2 won!";
    }
    else if (p2 == "scissors" && p1 == "rock")
    {
        return "Player 1 won!";
    }
    else if (p2 == "rock" && p1 == "paper")
    {
        return "Player 1 won!";
    }
    else if (p1 == "rock" && p2 == "paper")
    {
        return "Player 2 won!";
    }

    // 添加其他情况的处理
    return "Draw!";
}
