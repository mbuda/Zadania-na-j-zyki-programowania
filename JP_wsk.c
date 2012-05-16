/*Napisz program, kt�ry korzysta z dw�ch tablic. Jedna to tablica 4�liczb ca�kowitych, druga to tablica 
wska�nik�w na liczby ca�kowite. Przeprowad� proste przeszukiwanie tablicy liczb w celu odszukania 
najmniejszej i�zapami�taj jej wska�nik w�tablicy wska�nik�w pod indeksem�0. Potem poszukaj kolejnej 
i�ponownie zapami�taj jej wska�nik na nast�pnym miejscu w�tablicy wska�nik�w. W�ten spos�b utw�rz ca�� tablic� 
wska�nik�w. Zwr�� uwag� na to, �e takim sposobem mo�esz posortowa� niedu�e tablice liczb ca�kowitych bez 
konieczno�ci zmiany w�nich kolejno�ci danych. Wypisz na ekran zawarto�� obu tablic.*/


#include <stdio.h>

void swap(int **a, int **b) {
  int *temp;
  temp = *a; *a = *b; *b = temp;
}

int main() {
  int t[4] = { 11, 6, 5, 2 }, *a[4];
  int i, j;

  for (i = 0; i < 4; i++)
    printf("%d ", t[i]);
  printf("\n");

  for (i = 0; i < 4; i++)
    a[i] = &t[i];

  for (i = 0; i < 4; i++)
    for (j = i + 1; j < 4; j++)
      if (*a[i] > *a[j])
        swap(&a[i], &a[j]);

  for (i = 0; i < 4; i++)
    printf("%d ", *a[i]);
  printf("\n");

  return 0;
}