/* Napisz program, kt�ry pobiera Tw�j wiek w latach, a nast�pnie przelicza go na sekundy. */

#include<stdio.h>

main () {
int w;

printf("Napisz ile masz lat");
scanf("%i", &w);
leap = year%4==0 && year%100!=0 || year%400 == 0