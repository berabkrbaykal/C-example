#include <stdio.h>

int main() {
  char str[100];
  int word_count = 0;

  printf("Bir cümle girin: ");
  fgets(str, 100, stdin);

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ' || str[i] == '\n') {
      word_count++;
    }
  }

  printf("Cümlede %d kelime var.\n", word_count);

  return 0;
}
