#include <stdio.h>
#include <string.h>

void main () {
  char S[2][100];
  char MAIOR[100];
  int i, j, c = 0;
  
  for (i = 0; i < 2; i++) {
    gets(S[i]);
  }


  for (i = 0; i < 1; i++) {
    for (j = i + 1; j < 2; j++) {
      if (strcmp(S[i], S[j]) > 0){
        strcpy(MAIOR, S[i]);
        strcpy(S[i], S[j]);
        strcpy(S[j], MAIOR);
      }
    }
  }

  for (i = 0; i < 2; i++) {
    printf("%s ", S[i]);
  }
}