#include <iostream>

using namespace std;

int goals[4][4];
int wins[4][4];
int goalstotal[4];
int goaledstotal[4];
int score[4] = { 0 };
int sortscore[4] = { 0 };
int order[4] = {0 ,1, 2, 3};

int main() {
    string teams[4];
    for (int i = 0; i < 4; i++) {
        string teamt;
        cin >> teamt;
        teams[i] = teamt;
    }
    for (int i = 0; i < 4; i++) {
        int goalt;
        for (int j = 0; j < 4; j++) {
            cin >> goalt;
            goals[i][j] = goalt;
        }
    }

    for (int p1 = 0; p1 < 4; p1++) {
        for (int p2 = 0; p2 < 4; p2++) {
            if (p1 == p2) {
                wins[p1][p2] = -1;
                continue;
            }
            if (goals[p1][p2] > goals[p2][p1]) {
                wins[p1][p2] = 1;
                wins[p2][p1] = 0;
            } else if (goals[p1][p2] < goals[p2][p1]) {
                wins[p2][p1] = 1;
                wins[p1][p2] = 0;
            } else {
                wins[p2][p1] = -1;
                wins[p1][p2] = -1;
            }
            goalstotal[p1] += goals[p1][p2];
            goaledstotal[p2] += goals[p1][p2];
        }
    }
    for (int p = 0; p < 4; p++) {
        for (int q = 0; q < 4; q++) {
            if (p == q)
                continue;
            if (wins[p][q] == 1) 
                score[p] += 3;
            else if (wins[p][q] == -1) 
                score[p] += 1;
        }
    }

    for (int i = 0; i < 4; i++) {
        sortscore[i] += score[i] * 1e3;
        sortscore[i] += (goalstotal[i] - goaledstotal[i]) * 1e2;
        sortscore[i] += goalstotal[i] * 1;
    }
    bool sorted = false;

    while (!sorted) {
        for (int i = 0; i < 3; i++) {
            if (sortscore[order[i]] < sortscore[order[i+1]]) {
                int temp1 = order[i+1],
                    temp2 = order[i];
                order[i] = temp1;
                order[i+1] = temp2;
            }
        }
        cout << "E";

        if (sortscore[order[3]] < sortscore[order[2]] && sortscore[order[2]] < sortscore[order[1]] && sortscore[order[1]] < sortscore[order[0]])
            sorted = true;
    }

    for (int i = 0; i < 4; i++) {
        int index = order[i];
        cout << teams[index] << ' ' << score[index] << '\n';
    }
}

