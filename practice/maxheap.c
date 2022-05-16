#include <stdio.h>
#include <stdlib.h>

#define PARENT(i) ((int)i/(int)2)
#define CHILDLEFT(i) (i*2)
#define CHILDRIGHT(i) ((i*2)+1)
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a) < (b)) ? (a) : (b))

typedef struct heap heap;
struct heap {
    int *arr;
    int sp;
    int size;
};

void up_heap(heap *h, int i) {
    if (i <= 1) return;
    int pnti = PARENT(i);
    if (h->arr[i] > h->arr[pnti]) {
        int t = h->arr[i]; h->arr[i] = h->arr[pnti]; h->arr[pnti] = t;
        up_heap(h, pnti);
    }
}

void down_heap(heap *h, int i) {
    if (CHILDLEFT(i) > h->sp) return;
    
    int left_i = CHILDLEFT(i);
    int right_i = CHILDRIGHT(i);
    int min = MAX(left_i, i);
    if (right_i <= h->sp) min = MAX(min, right_i);
    if (min == i) return;
    int t = h->arr[i]; h->arr[i] = h->arr[min]; h->arr[min] = t;
    down_heap(h, min);
}

void push_heap(heap *h, int val) {
    h->sp++;
    h->arr[h->sp] = val;
    up_heap(h, h->sp);
}

void pop_heap(heap *h) {
    if (!h->sp) return;
    h->arr[1] = h->arr[h->sp--];
    down_heap(h, 1);
}

void init_heap(heap **h, int size) {
    *h = malloc(sizeof(heap));
    (*h)->arr = malloc((size+1) * sizeof(int));
    (*h)->size = size;
    (*h)->sp = 0;
}

void print_heap(heap *h) {
    for (int i = 1; i <= h->sp; i++)
        printf("%2d ", h->arr[i]);
    putc('\n', stdout);
}

void sort_heap(heap *h, int *arr) {
    int n = h->sp;
    for (int i = 0; i < n; i++){
        arr[i] = h->arr[1];
        pop_heap(h);
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main() {
    heap *hp;
    int n;
    scanf("%d", &n);
    init_heap(&hp, n);
    int a[n];
    for (int i = 0, a; i < n; i++)
        scanf("%d", &a), push_heap(hp, a);
       
    sort_heap(hp, a);
    //print_heap(hp);

}
