// Emanuel Prima

// Comentario: No había que copiar en un buffer (cadena) y la idea era cortar
// por EOF, no por \n

#include <ctype.h>
#include <stdio.h>

int main(void) {
  char c;

  // Leo desde la consola
  while (c != EOF) {
    c = getchar();

    if (isupper(c))
      putchar(tolower(c));  // Si es una letra mayúscula, cambio a minúscula
    else if (islower(c))
      putchar(toupper(c));  // Si es una letra minúscula, cambio a mayúscula
    else if (isdigit(c))
      continue;  // No copio
    else
      putchar(c);  // Todo lo demás se copia sin modificar
  }

  return 0;
}