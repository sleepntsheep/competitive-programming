#include <stdio.h>

int check_palindrome(char s[], int len) {
  if (len % 2 == 1) {
    int mid = (len - 1) / 2;
    len--;
    for (int i = mid; i < len; i++) {
      s[i] = s[i+1];
    }
  }
  int wrong = 0;
  printf("%d", len);
  for (int i = 0; i < (len % 2); i++) {
    if (s[i] != s[len - i - 1]) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int len = 1;
  char str[201];
  char c = getchar();
  while (c != EOF && c != '\n')
  {
    str[len] = c;
    len++;
    c = getchar();
  }
  len--;

  int palin = check_palindrome(str, len);

  printf("%d", palin);



}

