//Napisz program, kt�ry wczyta liczb� rzeczywist� 
//i wypisze jej pierwiastek kwadratowy. 
//W wypadku podania liczby ujemnej, 
//program powinien wypisa� komunikat o b��dzie oraz zako�czy� dzia�anie.

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