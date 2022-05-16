#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define mxn 100005

typedef struct std std;

struct std {
    long long id;
    char r[11];
    char n[11];
    std *next;
};

std *newnode(long long id, char r[11], char n[11]) {
    std *new = malloc(sizeof(std));
    new->id = id;
    strncpy(new->r, r, 10);
    strncpy(new->n, n, 10);
    new->next = NULL;

    return new;
}

std M[mxn];

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    long long i; 
    char r[11], nm[11];
    while (n--) {
        scanf("%lld %s %s", &i, r, nm);
        std *pt = M+(i%mxn);
        if (pt->id == 0) {
            pt->id = i;
            strncpy(pt->r, r, 10);
            strncpy(pt->n, nm, 10);
        }
        else {
            while (pt->next != NULL)
                pt = pt->next;
            std *new = newnode(i, r, nm);
            pt->next = new;
        }
    }
    while (q--) {
        scanf("%lld", &i);
        std *stdd = M+i%mxn;

        if (stdd->id == i) {
            printf("%lld:%s-%s\n", stdd->id, stdd->r, stdd->n); 
        }
        else if (stdd->id == 0) {
            printf("%lld:NOT FOUND\n", stdd->id);
        }
        else {
            while (stdd->next != NULL)
                stdd = stdd->next;
            printf("%lld:%s-%s\n", stdd->id, stdd->r, stdd->n); 
        }
    }


    return 0;
}


