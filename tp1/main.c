// Emanuel Prima

// gcc main.c -pedantic-errors -std=c11 -Wall -g -o prog

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int lon = 20;
  char cadena[lon];
  int i = 0, j;
  char c;

  for (j = 0; j < lon; j++) {
    cadena[j] = 0;
  }

  while (c != '\n') {
    c = getchar();
    cadena[i] = c;
    i++;
  }
  cadena[i] = '\0';

  for (j = 0; j < lon; j++) {
    if (isupper(cadena[j]))
      putchar(tolower(cadena[j]));
    else if (islower(cadena[j]))
      putchar(toupper(cadena[j]));
    else if (isdigit(cadena[j]))
      continue;
    else
      putchar(cadena[j]);
  }
  return 0;
}