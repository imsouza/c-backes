#include <stdio.h>
#include <string.h>

void main () {
  char S[100];
  int i;
  
  fgets(S, 100, stdin);

  for (i = 0; S[i] != '\0'; i++) {
    if (S[i]+3 == '#') {
      S[i] = ' ';
    } else {
      S[i] = S[i]+3;
    }
  }

  printf("%s\n", S);
}