#include <stdio.h>

int main() {
  int l[10];
  int arrlen = 0;
  int res = 0;
  int temp;
  int triggered;
  for (int i = 0; i < 10; i++){
    scanf("%d", &temp);
    triggered = 0;
    for (int j = 0; j < arrlen; j++) {
      if (l[j] == temp % 42) {
        triggered = 1;
      }
    }
    l[i] = temp % 42;
    arrlen++;
    if (0 == triggered){
      res++;
    }

  }

  printf("%d", res);
}
