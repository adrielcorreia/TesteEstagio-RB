#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
  int count = 0;
  char string[100];
  printf("digite uma string com no máximo 100 caracteres: ");
  scanf("%s", &string);

  for (int i = 0; i <= strlen(string); i++) {
    if (string[i] == 'a' || string[i] == 'A') {
      count++;
    }
  }

  if (count > 0) {
    printf("a quantidade de vezes que a letra A, seja maiúscula ou minúscula aparecem na string '%s' é: %d\n", string, count);
  } else {
    printf("não há letra A nesta string\n");
  }
}
