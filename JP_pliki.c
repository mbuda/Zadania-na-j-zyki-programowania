#include <stdio.h>

/* kopiowanie zawarto�ci pliku */

int main (int argc, char *argv[]) {
  FILE *fin;   /* uchwyt do pliku wej�ciowego */
  FILE *fout;  /* uchwyt do pliku wyj�ciowego */
  int c;

  if (argc != 3) {
    printf("U�ycie: %s SOURCE DEST\n", argv[0]);
    return 3;
  }
  if ((fin = fopen(argv[1], "r")) == NULL) {
    printf("Nie mog� otworzy� pliku do czytania '%s'\n", argv[1]);
    return 1;
  }
  if ((fout = fopen(argv[2], "w")) == NULL) {
    printf("Nie mog� otworzy� pliku do zapisu '%s'\n", argv[2]);
    return 2;
  }

  printf("Kopiowanie pliku: %s -> %s\n", argv[1], argv[2]);

  while ((c = fgetc(fin)) != EOF) {
    fputc(c, fout);
  }

  fclose(fin);
  fclose(fout);

  return 0;
}