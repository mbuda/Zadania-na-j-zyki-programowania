/* Napisz program, kt�ry wyliczy sum� liczb naturalnych od 1 do liczby n podanej przez u�ytkownika. 
Kiedy u�ytkownik poda liczb� mniejsz� ni� 1, to program powinien wypisa� stosowny komunikat o�b��dzie. */

#include <stdio.h>

int main()
{
  int n, suma=0, i = 1;

    printf("Podaj gorna granice: ");
    scanf("%i", &n);

    if(n<1){
      printf("Podales/as zla liczbe, ma byc wieksza od 1\n");
	scanf("%i", &n);
}
 
 else {
    while (i <= n) {
      suma+=i;
++i;
    }
	}
printf("%i\n",suma);
    return 0;
}