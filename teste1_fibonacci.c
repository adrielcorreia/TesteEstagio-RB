#include <stdio.h>

int isPartOf_Fibonacci(int num) {
  int x = 0, y = 1, temp;

  while (y <= num) {
    if (y == num) {
      return 1;
    }

    temp = x+y;
    x = y;
    y = temp;
  }

  return 0;
}

void inputRead(int num_input) {
  if (isPartOf_Fibonacci(num_input)) {
    printf("o número %d pertence à sequência.\n", num_input);
  } else {
    printf("o número %d não pertence à sequência.\n", num_input);
  }
}

int main(int argc, char *argv[]) {
  int num;
  printf("digite um número inteiro para saber se o mesmo pertence à sequência Fibonacci: ");
  scanf("%d", &num);
  inputRead(num);
  return 0;
}
