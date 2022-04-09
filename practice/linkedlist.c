#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int d;
    struct node *n;
} node;

void createNewAtStart(node *n);

void createNewAtEnd(node *n, int value);

node *lookupPos(node *n, int pos);

node *insertPos(node *n, int pos, int value);

node *deletePos(node *n, int pos);

int main() {
    node *n = (node *) malloc(sizeof(node));
    n->n = NULL;

    for (int i = 0; i < 5; i++)
        createNewAtEnd(n, i);

    deletePos(n, 3);
    for (int i = 0; i < 4; i++) {
        node *p = lookupPos(n, i);
        printf("%p %d %p\n", p, p->d, p->n);
        // n = n->n;
    }
    free(n);
    return 0;
}

void createNewAtStart(node *n) {
    node *temp = (node *) malloc(sizeof(node));
    temp->d = n->d;
    temp->n = n->n;
    n->d = 0;
    n->n = temp;
}

void createNewAtEnd(node *n, int value) {
    node *last = (node *) malloc(sizeof(node));
    last->n = NULL;
    last->d = value;
    while (n->n != NULL)
        n = n->n;
    n->n = last;
}

node *lookupPos(node *n, int pos) {
    for (int i = 0; i < pos; i++)
        n = n->n;
    return n;
}

node *insertPos(node *n, int pos, int value) {
    node *new = (node *) malloc(sizeof(node));
    node *old = lookupPos(n, pos);
    new->n = old->n;
    old->n = new;
    new->d = value;
}

node *deletePos(node *n, int pos) {
    node *bef = lookupPos(n, pos-1);
    node *del = bef->n;
    bef->n = bef->n->n;
    free(del);
}
