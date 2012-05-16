/*Napisz program, który korzysta z dwóch tablic. Jedna to tablica 4 liczb ca³kowitych, druga to tablica 
wskaŸników na liczby ca³kowite. PrzeprowadŸ proste przeszukiwanie tablicy liczb w celu odszukania 
najmniejszej i zapamiêtaj jej wskaŸnik w tablicy wskaŸników pod indeksem 0. Potem poszukaj kolejnej 
i ponownie zapamiêtaj jej wskaŸnik na nastêpnym miejscu w tablicy wskaŸników. W ten sposób utwórz ca³¹ tablicê 
wskaŸników. Zwróæ uwagê na to, ¿e takim sposobem mo¿esz posortowaæ niedu¿e tablice liczb ca³kowitych bez 
koniecznoœci zmiany w nich kolejnoœci danych. Wypisz na ekran zawartoœæ obu tablic.*/


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