// Emanuel Prima

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int lon = 20;
  char cadena[lon];
  int i = 0, j;
  char c;

  // Inicializo la cadena
  for (j = 0; j < lon; j++) {
    cadena[j] = 0;
  }

  // Leo desde la consola
  while (c != '\n') {
    c = getchar();
    cadena[i] = c;
    i++;
  }
  cadena[i] = '\0';

  for (j = 0; j < lon; j++) {
    if (isupper(cadena[j]))
      putchar(tolower(cadena[j]));  // Si es una letra mayúscula, cambio a minúscula
    else if (islower(cadena[j]))
      putchar(toupper(cadena[j]));  // Si es una letra minúscula, cambio a mayúscula
    else if (isdigit(cadena[j]))
      continue;  // No copio
    else
      putchar(cadena[j]);  // Todo lo demás se copia sin modificar
  }
  return 0;
}