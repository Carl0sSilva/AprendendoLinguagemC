#include <stdio.h>

double soma(double n1, double n2) { return n1 + n2; }

double subtracao(double n1, double n2) { return n1 - n2; }

double multiplicacao(double n1, double n2) { return n1 * n2; }

double divisao(double n1, double n2) { return n1 / n2; }

int main(void) {

  int opc = 0;
  double n1 = 0, n2 = 0;
  char cntn;

  do {
    printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    scanf("%d", &opc);

    printf("\nDigite o primeiro número: ");
    scanf("%lf", &n1);

    printf("Digite o segundo número: ");
    scanf("%lf", &n2);

    switch (opc) {
    case 1:

      printf("\nSoma: %g\n", soma(n1, n2));

      break;

    case 2:

      printf("\nSubtracao: %g\n", subtracao(n1, n2));

      break;

    case 3:

      printf("\nMultiplicação: %g\n", multiplicacao(n1, n2));

      break;

    case 4:

      if (n2 == 0) {
        printf("\nDivisão Impossível\n");
      } else {
        printf("\nDivisao: %g\n", divisao(n1, n2));
      }

      break;

    default:

      printf("\nOpção não encontrada!");

      break;
    }

    printf("\nContinuar? [s/n]\n");
    scanf(" %c", &cntn);

  } while (cntn == 's');

  return 0;
}