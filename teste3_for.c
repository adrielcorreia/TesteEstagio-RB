#include <stdio.h>

int main(int argc, char* argv[]){
  int indice = 12, soma = 0, k = 1;

  while (k < indice) {
    k++;
    soma = k + soma;
  }

  printf("soma: %d\n", soma);
}
