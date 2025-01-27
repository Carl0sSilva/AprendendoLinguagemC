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
