#include <iostream>
#include <algorithm>
using namespace std;

struct team {
    public:
    string name;
    int score = 0,
        goals = 0,
        goaleds = 0;
    team(string name = "a") {
        this->name = name;
    }
};

bool compare (team a, team b) {
    if (a.score != b.score)
        return a.score > b.score;
    else if (a.goals - a.goaleds != b.goals - b.goaleds)
        return a.goals - a.goaleds > b.goals - b.goaleds;
    else
        return a.goals > b.goals;
    return false;
}

int main() {
    team teams[4];
    int a[4][4];
    for (int i = 0; i < 4; i++)
        cin >> teams[i].name;
    for (int i = 0; i < 16; i++)
        cin >> a[i/4][i%4];

    for (int p = 0; p < 4; p++) {
        for (int q = 0; q < 4; q++) {
            if (p == q) continue;
            if (a[p][q] > a[q][p])
                teams[p].score += 3;
            else if (a[p][q] == a[q][p]) 
                teams[p].score++;
            teams[p].goals += a[p][q];
            teams[p].goaleds += a[q][p];
        }
    }

    while (!(compare(teams[0], teams[1]) && compare(teams[1], teams[2]) && compare(teams[2], teams[3]))) {
        for (int i = 0; i < 3; i++) {
            if (!compare(teams[i], teams[i+1])) {
                team temp1, temp2;
                temp1 = teams[i];
                temp2 = teams[i+1];
                teams[i] = temp2;
                teams[i+1] = temp1;
            }
        }
    }

    for (int i = 0; i < 4; i++)
        cout << teams[i].name << ' ' << teams[i].score << endl;
}
