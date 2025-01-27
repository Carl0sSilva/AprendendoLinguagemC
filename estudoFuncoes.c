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

int potencia(int b, int e) {
  int r = b;

  if (e == 0) {
    r = 1;
  } else
    while (e != 1) {
      r = b * r;
      e--;
    }

  return r;
}

int idadeEmDias(int a, int m, int d) {

  int r = 0;

  if (m > 12 || d > 30) {
    r = -1;
  } else {
    r = (a * 365) + (m * 30) + d;
  }

  return r;
}