#include <vector>
#include <cstdio>
#include <queue>
#include <cstring>

using namespace std;
#define N 100006

char primes[N];
int mins[N];

vector<int> primev;
int n, m, ans = 1e9;

int main() {
    memset(primes, 1, sizeof primes);
	for (int i = 2; i < N; i++)
    {
		if (!primes[i])
        {
            continue;
        }
        for (int j = 2; i*j < N; j++)
        {
            primes[i*j] = 0;
        }
        primev.push_back(i);
    }

    scanf("%d%d", &n, &m);
	queue<pair<int,int>> q;
	q.push({0, n});
	memset(mins, 0x3f, sizeof mins);

	for (;q.size();) {
		int s = q.front().first;
		int o = q.front().second;
		q.pop();
		if (o > m)
        {
            continue;
        }
		if (s >= mins[o])
        {
            continue;
        }
		mins[o] = min(mins[o], s);
		if (o == m)
        {
            ans = s;
        }
        int _o = o;
        for (int prme : primev)
        {
            if (prme == o || prme > _o)
            {
                break;
            }
            if (_o % prme == 0)
            {
                q.push({s+1, o + prme});
                _o /= prme;
            }
        }
	}

	printf("%d", ans==1e9 ? -1 : ans);
    return 0;
}

