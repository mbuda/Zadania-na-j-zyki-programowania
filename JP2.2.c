/* Napisz program, kt�ry prosi o podanie kodu ASCII, 
a nast�pnie wypisuje znak odpowiadaj�cy temu kodowi. */

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

