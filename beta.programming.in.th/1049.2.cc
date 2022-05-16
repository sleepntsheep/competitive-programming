#include <stdio.h>
int n, m;
int cd;
int rw_q[100005];
int rd_max_sp[100005];
int rd_max_pyid[100005];
int rd_max_rw[100005];
int main() {
    scanf("%d%d", &n, &m);
    int i;
    int a;
    unsigned short b;
    int c;
    int mxrdfrpn;
    for (i = 0; i < n; i++) {
        scanf("%d%hd%d", &a, &b, &c);
        b--;
        int round = rw_q[b];
        if (rd_max_sp[round] < c) {
            rd_max_sp[round] = c;
            rd_max_pyid[round] = a;
        }
        else if (rd_max_sp[round] == c) {
            if (b < rd_max_rw[round]){
                rd_max_pyid[round] = a;
            }
        }
        if (b > rd_max_rw[round]) {
            rd_max_rw[round] = b;
        }
        rw_q[b]++;
        if (mxrdfrpn < rw_q[b]){
            mxrdfrpn = rw_q[b];
        }
    }
    for (i = 0; i < mxrdfrpn && rd_max_pyid[i]; i++)
        printf("%d\n", rd_max_pyid[i]);;
    return 0;
}

