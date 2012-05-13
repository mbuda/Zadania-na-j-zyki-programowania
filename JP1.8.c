#include<stdio.h>

main () {
int a, b, c, s, i;
printf("Podaj liczbe\n");
scanf("%i", &a);
printf("Kolejna\n");
scanf("%i", &b);
printf("I jeszcze ostatnia\n");
scanf("%i", &c);

if(a>b) {
	if(a>c)
		printf("Najwieksza jest liczba %i\n", a);
	else("Najwieksza jest liczba %i\n", c);
	}
else {
	if(b<c)
		printf("Najwieksza jest liczba %i\n", c);
	else
		printf("Najwieksza jest liczba %i\n", b);
		}
	
if(a>b) {
	if(b<c)
		printf("Najmniejsza jest liczba %i\n", b);
	else("Najmniejsza jest liczba %i\n", c);
	}
else {
	if(a<c)
		printf("Najmniejsza jest liczba %i\n", a);
	else
		printf("Najmniejsza jest liczba %i\n", c);
		}

printf("Suma tych liczb to: %i\n", a+b+c);
printf("Iloczyn tych liczb to: %i\n", a*b*c);

return 0;
}