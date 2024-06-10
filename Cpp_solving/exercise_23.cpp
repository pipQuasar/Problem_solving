/*
    K teams participate in a soccer tournament. The tournament is played with the round-robin system. By
    For each match played by a team, the following information is available:
    a) Team number,
    b) Result code ('P'= Lost, 'E'= Tied, 'G'= Won).
    A batch of data is assembled with all the results of the tournament, grouped by team number.
    Develop the program that prints:
    For each team, its number and the total score it obtained (add 3 if it wins, and 1 if it ties).
*/
#include <iostream>
using namespace std;

void request_char_data(string message, char &value){
    cout << message;
    cin >> value;
}

void score_counter(char result_code, int &score){
    switch (result_code)
    {
    case 'L':
        score += 0;
        break;
    case 'T':
        score += 1;
        break;
    case 'W':
        score += 3;
        break;
    default:
        break;
    }
}

void tournament(int K_teams){
    for (int i = 1; i <= K_teams; i++)
    {   
        int score = 0;

        for (int j = 1; j <= K_teams; j++)
        {   
            char result_code;

            if (j == i) continue;    
            cout << "Team " << i << " vs. " << "Team " << j << endl;
            request_char_data("Introduce result code ('L'= Lost, 'T'= Tied, 'W'= Won): ", result_code);
            score_counter(result_code, score);
        }
        cout << "Team " << i << " total points: " << score << endl << endl;
    }
}

int main () {
    tournament(3);
 return 0;
}