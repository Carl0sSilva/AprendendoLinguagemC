#include <stdio.h>

char conceito(double nota) {
  if (nota < 5) {
    return 'D';
  } else if (nota >= 5 && nota < 7) {
    return 'C';
  } else if (nota >= 7 && nota < 9) {
    return 'B';
  } else {
    return 'A';
  }
}

int fatorial(int n) {

  int r = 0, a = 0;

  if (n == 0) {
    n = 1;
  } else {
    a = n - 1;

    while (a != 0) {

      n = n * a;

      a--;
    }
  }

  return n;
}