#include <stdio.h>

int main(void) {

  int vetor [20], i = 0, x = 0;

  while (i < 10){
    if(x % 2 != 0){
      vetor[i] = x;
      i++;
    }
    x++;
  }

  for (i = 0; i < 10; i++){
    printf("\n%d", vetor[i]);
  }


  return 0;
}