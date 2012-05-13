/* Napisz program, który prosi o podanie kodu ASCII, 
a nastêpnie wypisuje znak odpowiadaj¹cy temu kodowi. */

#include<stdio.h>
main () {
int a;
char b;
printf("Podaj kod ASCII\n");
scanf("%i", &a);
b=a;
printf("%c", b);
return 0;
}

