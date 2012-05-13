/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest wiêksza. */
#include <stdio.h>
int main()
{
   int licz1, licz2 ;

   printf("Podaj pierwsza liczbe: ");
   scanf("%i", &licz1);
   printf("Podaj druga liczbe: ");
   scanf("%i", &licz2);
   if(licz1=licz2)	
		printf("Liczby %i i %i sa rowne.");
   if (licz1>licz2)
     printf("Wieksza jest liczba %i", licz1);
	else 
		printf("Wieksza jest liczba %i", licz2);
   return 0;
}