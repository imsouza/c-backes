#include <stdio.h>

void main () {
  int num, i = 0, num_ant = 0, num_pos = 1, sum_nums;

  scanf("%i", &num);

  if (num <= 0) {
    printf("Apenas valores maiores do que 0.\n");
  } else if (num == 1) {
    printf("%i\n", num);
  } else {
    while (i < num) {
      if (i == num-1) {
        printf("%i.\n", num_ant);
        break;
      }

      printf("%i, ", num_ant);

      sum_nums = num_ant + num_pos;
      num_ant  = num_pos;
      num_pos  = sum_nums;
      i++;
    }
  }
}