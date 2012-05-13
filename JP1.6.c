//Napisz program, który wczyta liczbê rzeczywist¹ 
//i wypisze jej pierwiastek kwadratowy. 
//W wypadku podania liczby ujemnej, 
//program powinien wypisaæ komunikat o b³êdzie oraz zakoñczyæ dzia³anie.

#include<stdio.h>
#include<math.h>
main () {
double r, p;


printf("Podaj liczbe, ktorej chcesz znac pierwiastek: ");
scanf("%lf", &r);

if(r<0){
	printf("To zla liczba");
	return 0;
	}

p = sqrt(r);

printf("Pierwiastek z tej liczby wynosi: %2lf\n", p);

return 0;
}