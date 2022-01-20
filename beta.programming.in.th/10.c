#include <stdio.h>

int main() {
  int pos = 1;
  char a[51];
  scanf("%s", a);

  for (int i = 0; i < 50; i++) {
    if (a[i] == 'A'){
      if (pos == 1) pos++;
      else if (pos == 2) pos--;

    } 
    else if (a[i] == 'B'){
      if (pos == 2) pos++;
      else if (pos == 3) pos--;
    }
    else if (a[i] == 'C') {
      if (pos == 3) pos = 1;
      else if (pos == 1) pos = 3;
    }
  }
  printf("%d", pos);
}
