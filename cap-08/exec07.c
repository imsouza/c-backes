#include <stdio.h>

typedef struct {
  int hh, mm, ss;
  int tmp_ss;
} hora;


void main () {
  hora h[5];

  int i, j;

  int maiorTempo = 0;

  for (i = 0; i < 5; i++) {
    setbuf(stdin, NULL);

    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("----------------- Hora #%i -----------------\n", i+1);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    printf("Hora (hh mm ss) ?\b ");
    setbuf(stdin, NULL);
    scanf("%i %i %i", &h[i].hh, &h[i].mm, &h[i].ss);

    // Converte todo tempo para segundos
    h[i].tmp_ss = (h[i].hh * 3600) + (h[i].mm * 60) + h[i].ss;
  }


  for (i = 0; i < 5; i++) {
    if (h[i].tmp_ss > maiorTempo) {
      maiorTempo = h[i].tmp_ss;
    }
  }


  printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("---> Maior Hora: %i\n", maiorTempo / 3600);
  printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
}