/* Napisa� program, kt�ry wypisze tabelk� warto�ci pierwiastka kwadratowego. 
Program ma pyta� o warto�� poczatkow� warto�� ko�cow� krok dla argumentu 
i wypisywa� tabelk� w podanym zakresie. Liczby powinny by� wypisywane 
z dok�adno�ci� czterech miejsc po przecinku. */

#include<stdio.h>
#include<math.h>

main () {

double a, b, c;

printf("Podaj wartosc poczatkowa: \n");
scanf("%lf", &a);
printf("Podaj wartosc koncowa: \n");
scanf("%lf", &b);
printf("Podaj krok(o ile zwiekszac liczbe poczatkowa): \n");
scanf("%lf", &c);

printf("liczba  pierwiastek\n");
while (a<=b) {
printf("%5.4lf   %5.4lf\n", a, sqrt(a));
a=a+c;
}
return 0;
}

