#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Include the <algorithm> header for the count function

using namespace std;

string checkWinner(const vector<string> &board)
{
    // Check rows
    for (const string &row : board)
    {
        // Use the std::count function
        if (count(row.begin(), row.end(), 'X') == 3)
        {
            return "Bob";
        }
    }

    // Check columns
    for (int col = 0; col < 3; col++)
    {
        if (board[0][col] == 'X' && board[1][col] == 'X' && board[2][col] == 'X')
        {
            return "Bob";
        }
    }

    // Check diagonals
    if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||
        (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'))
    {
        return "Bob";
    }

    // If no winning condition is met, Alice wins
    return "Alice";
}

void playGame(const vector<vector<string>> &boards, int game = 1)
{
    // Base case: All games played
    if (game > boards.size())
    {
        return;
    }

    // Determine the winner
    const string winner = checkWinner(boards[game - 1]);

    // Print the result
    cout << "Game " << game << ": " << winner << endl;

    // Recursive call for the next game
    playGame(boards, game + 1);
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<vector<string>> boards(n, vector<string>(3));

    // Read the board configurations
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            getline(cin, boards[i][j]);
        }
    }

    playGame(boards);

    return 0;
}