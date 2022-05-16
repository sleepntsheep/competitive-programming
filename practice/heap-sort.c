#include <stdio.h>
#include <stdlib.h>

#define PARENT(i) ((int)(i/2))
#define CHILDL(i) (i*2)
#define CHILDR(i) (i*2+1)

typedef struct heap {
    int *arr;
    int size;
    int stp;
} heap;

heap *heap_init(size_t size) {
    heap *new = malloc(sizeof(int) * size+5);
    new->size = size;
    new->stp = 0;

    return new;
}

void heap_bbdown(heap *h, int idx) {
    if (CHILDL(idx) > h->size) return;

    int max = h->arr[idx];
    int l = h->arr[CHILDL(idx)];
    if (l > max) max = l;
    if (CHILDR(idx) > h->size) goto skipr;
    int r = h->arr[CHILDR(idx)];
    if (r > max) max = r;
    skipr:;

    if (idx == max) return;
    int t = h->arr[idx]; h->arr[idx] = h->arr[max]; h->arr[max] = t;

    heap_bbdown(h, max);
}

void heap_bbup(heap *h, int idx) {
    int pi = PARENT(idx);
    if (h->arr[pi] < h->arr[idx]) {
        int t = h->arr[idx]; h->arr[idx] = h-> arr[pi]; h->arr[pi] = t;
        heap_bbup(h, pi);
    }
}

void heap_push(heap *h, int d) {
    h->stp++;
    h->arr[h->stp] = d;
    heap_bbup(h, h->stp);
}

int heap_pop(heap *h) {
    int pop = h->arr[1];
    h->arr[1] = h->arr[h->stp];
    h->stp--;

    heap_bbdown(h, 1);
    return pop;
}

void heapify(heap *st, int idx) {

}

void heapsort(size_t size, int *a) {
    heap *h = heap_init(size);
    for (int i = 0; i < size; i++)
        heap_push(h, a[i]);

    for (int i = 0; i < size - 1; i++) {
        a[i] = heap_pop(h);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n+5];
    for (int i = 0; i < n; i++)
        scanf("%d", a+i);
    
    heapsort(n, a);

    for (int i = 0; i < n; i++)
        printf("%d", a[i]);
}
