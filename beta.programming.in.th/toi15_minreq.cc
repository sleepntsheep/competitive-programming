#include <stdio.h>

int main() {
    int ne, nstd, nsim;
    scanf("%d%d%d", &ne, &nstd, &nsim);
    // max elevator weight
    int emaxw[ne];
    // p weight
    int pw[ne];
    // student weight
    int stdw[nstd];
    // time limit of each sim
    int tlimit[nsim];
    // sub[i][j] mean first student in subseq j of sim i
    int sub[nsim][ne];
    for (int i = 0; i < ne; i++)
        scanf("%d", emaxw+i);
    for (int i = 0; i < ne; i++)
        scanf("%d", pw+i);
    for (int i = 0; i < nstd; i++)
        scanf("%d", stdw+i);
    for (int i = 0; i < nsim; i++)
        scanf("%d", tlimit+i);


    return 0;
}
