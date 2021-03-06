#include <iostream>

using namespace std;

int main() {
    string teams[4];
    int goals[4][4];
    int wins[4][4];
    bool visited[4][4] = { 0 };
    int goalstotal[4];
    int goaledstotal[4];
    int score[4] = { 0 };
    int sortscore[4] = { 0 };
    int order[4];
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
    int max = 0;

    for (int p1 = 0; p1 < 4; p1++) {
        for (int p2 = 0; p2 < 4; p2++) {
            int q1 = p2;
            int q2 = p1;
            if (p1 == p2) {
                wins[p1][p2] = -1;
                visited[p1][p2] = 1;
                continue;
            }
            if (goals[p1][p2] > goals[q1][q2]) {
                wins[p1][p2] = 1;
                wins[q1][q2] = 0;
            } else if (goals[p1][p2] < goals[q1][q2]) {
                wins[q1][q2] = 1;
                wins[p1][p2] = 0;
            } else {
                wins[q1][q2] = -1;
                wins[p1][p2] = -1;
            }
            visited[q1][q2] = 1;
            visited[p1][p2] = 1;
            goalstotal[p1] += goals[p1][p2];
            goaledstotal[q1] += goals[p1][p2];
        }
    }

    cout << " ____" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout << wins[i][j] << ' ';
        cout <<endl;
    }

    cout << " ____" << endl;
    for (int i = 0; i < 4; i++) {
        cout << goalstotal[i] << ' ';
        cout <<endl;
    }

    cout << " ____" << endl;
    for (int i = 0; i < 4; i++) {
        cout << goaledstotal[i] << ' ';
        cout <<endl;
    }

    for (int p = 0; p < 4; p++) {
        for (int q = 0; q < 4; q++) {
            if (p == q)
                continue;
            if (wins[p][q] == 1) {
                score[p] += 3;
            } else if (wins[p][q] == 0) {
                score[q] += 3;
            } else if (wins[p][q] == -1) {
                score[p] += 1;
                score[q] += 1;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        sortscore[i] += score[i] * 1e4;
        sortscore[i] += (goalstotal[i] - goaledstotal[i]) * 1e3;
        sortscore[i] += goalstotal[i] * 1;
    }

    bool sorted = false;

    while (!sorted) {
        for (int i = 0; i < 3; i++) {
            if (sortscore[i] < sortscore[i+1]) {
                int temp1 = sortscore[i+1],
                    temp2 = sortscore[i];
                sortscore[i] = temp1;
                sortscore[i+1] = temp2;
            }
        }

        if (sortscore[3] > sortscore[2] && sortscore[2] > sortscore[1] && sortscore[1] > sortscore[0])
            sorted = true;
    }

}

