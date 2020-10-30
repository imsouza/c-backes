#include <stdio.h>

int segundos (int hh, int mm, int ss) {
  return hh * 3600 + mm * 60 + ss;
}


void main () {
  int hh, mm, ss;

  scanf("%i %i %i", &hh, &mm, &ss);

  printf("Total Segundos: %i\n", segundos(hh, mm, ss));
}