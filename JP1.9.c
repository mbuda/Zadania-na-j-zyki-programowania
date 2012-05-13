/* Napisaæ program, który wypisze tabelkê wartoœci pierwiastka kwadratowego. 
Program ma pytaæ o wartoœæ poczatkow¹ wartoœæ koñcow¹ krok dla argumentu 
i wypisywaæ tabelkê w podanym zakresie. Liczby powinny byæ wypisywane 
z dok³adnoœci¹ czterech miejsc po przecinku. */

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

