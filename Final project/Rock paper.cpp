#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

// Enum for game choices
enum Choice { ROCK, PAPER, SCISSORS };

// Function to get the choice as a string
string getChoiceString(Choice choice) {
    switch (choice) {
        case ROCK: return "Rock";
        case PAPER: return "Paper";
        case SCISSORS: return "Scissors";
        default: return "Invalid Choice";
    }
}

// Function to get the winner
string getWinner(Choice player1, Choice player2) {
    if (player1 == player2) return "Tie";
    switch (player1) {
        case ROCK:
            return (player2 == SCISSORS) ? "Player 1" : "Player 2";
        case PAPER:
            return (player2 == ROCK) ? "Player 1" : "Player 2";
        case SCISSORS:
            return (player2 == PAPER) ? "Player 1" : "Player 2";
    }
}

// Function to get the player's choice
Choice getPlayerChoice(string playerName) {
    int choice;
    cout << playerName << ", enter your choice (1 - Rock, 2 - Paper, 3 - Scissors): ";
    cin >> choice;
    return static_cast<Choice>(choice - 1);
}

// Function to log the game history to a file
void logGameHistory(string playerName1, string playerName2, Choice player1Choice, Choice player2Choice, string winner) {
    ofstream logFile("game_history.txt", ios_base::app);
    time_t now = time(0);
    tm* ltm = localtime(&now);
    logFile << "Date: " << (ltm->tm_mon + 1) << "/" << ltm->tm_mday << "/" << (ltm->tm_year + 1900) << " Time: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
    logFile << "Player 1: " << playerName1 << " - " << getChoiceString(player1Choice) << endl;
    logFile << "Player 2: " << playerName2 << " - " << getChoiceString(player2Choice) << endl;
    logFile << "Winner: " << winner << endl << endl;
    logFile.close();
}

int main() {
    string playerName1, playerName2;
    cout << "Enter Player 1 name: ";
    cin >> playerName1;
    cout << "Enter Player 2 name: ";
    cin >> playerName2;

    Choice player1Choice, player2Choice;
    string winner;

    player1Choice = getPlayerChoice(playerName1);
    player2Choice = getPlayerChoice(playerName2);

    winner = getWinner(player1Choice, player2Choice);

    cout << endl << "Player 1: " << playerName1 << " - " << getChoiceString(player1Choice) << endl;
    cout << "Player 2: " << playerName2 << " - " << getChoiceString(player2Choice) << endl;
    cout << "Winner: " << winner << endl;

    logGameHistory(playerName1, playerName2, player1Choice, player2Choice, winner);

    return 0;
}

