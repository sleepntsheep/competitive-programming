#include <stdio.h>

int main() {
  char t[15];
  char ch;
  //scanf("%s", t);
  int al = 0;
  ch = getchar();
  while (ch != '\n' && ch != EOF) {
    t[al] = ch;
    al++;
    ch = getchar();
  }

  int lcit = 0; // Last Char Is devidable by Three

  for (int i = 0; i < al; i++) {
    ch = t[i];
    if (!((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))) continue;
    if ((i + 1) % 3 == 0) printf("..*.");
    else printf("..#.");
  }
  printf(".\n");

  for (int i = 0; i < al; i++) {
    ch = t[i];
    if (!((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))) continue;
    if ((i + 1) % 3 == 0) printf(".*.*");
    else printf(".#.#");
  }
  printf(".\n");

  for (int i = 0; i < al; i++) {
    ch = t[i];
    if (!((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))) continue;

    if ((i + 1) % 3 == 0) {
      printf("*.%c.", ch);
      lcit = 1;
    }

    else if (lcit) {
      printf("*.%c.", ch);
      lcit = 0;
    }

    else printf("#.%c.", ch);
  }
  if (al % 3 == 0) printf("*\n");
  else printf("#\n");

  for (int i = 0; i < al; i++) {
    ch = t[i];
    if (!((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))) continue;
    if ((i + 1) % 3 == 0) printf(".*.*");
    else printf(".#.#");
  }
  printf(".\n");


  for (int i = 0; i < al; i++) {
    ch = t[i];
    if (!((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))) continue;
    if ((i + 1) % 3 == 0) printf("..*.");
    else printf("..#.");
  }

  printf(".\n");
}
