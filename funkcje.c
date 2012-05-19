/* Napisz program, który wyœwietla prostok¹t, owal, strza³kê i diament w/g poni¿szego wzoru:
*****    **      *      *
*   *   *  *    ***    * *
*   *  *    *  *****  *   *
*   *  *    *    *    *   *
*   *   *  *     *     * *
*****    **      *      *

*/

#include <stdio.h>
void prostokat(int szerokosc, int wysokosc);
void wypisz_wiersz(int spacja, int gwiazdka, int spacja2, int gwiazdka2);
void owal(int szerokosc, int wysokosc);
void diament(int szerokosc, int wysokosc);

int main(){

prostokat(9,5);
printf("\n");
owal(7,8);
printf("\n");
diament(10,11);
printf("\n");

return 0;
}


void prostokat(int szerokosc, int wysokosc){
/* wypisujemy pierwszy wiersz*/
wypisz_wiersz(0,szerokosc,0,0);

/* usuwamy z wysokoœci pierwszy i ostatni wiersz */
wysokosc-=2;

/* wypisujemy œrodkowe wiersze */
while(wysokosc--)
wypisz_wiersz(0,1,szerokosc-2,1);

/* wypisujemy ostatni wiersz */
wypisz_wiersz(0,szerokosc,0,0);
}

void owal(int szerokosc, int wysokosc){

if(szerokosc%2)
++szerokosc;

if(wysokosc%2)
++wysokosc;

int wys=wysokosc/2;
int szer=(szerokosc/2)-1;
int i=0;

while(wys--){
wypisz_wiersz(szer,1,i,1);
szer-=1;
i+=2;
}

i-=2;
wys=wysokosc/2;
szer+=1;


while(wys--){
wypisz_wiersz(szer,1,i,1);
szer+=1;
i-=2;
}

}


void diament(int szerokosc, int wysokosc){

if(szerokosc%2)
++szerokosc;

if(wysokosc%2)
++wysokosc;

int wys=(wysokosc/2)-1;
int szer=(szerokosc/2);
int i=0;

wypisz_wiersz(szer,1,0,0);
szer-=1;
i+=1;

while(wys--){
wypisz_wiersz(szer,1,i,1);
szer-=1;
i+=2;
}

i-=2;
wys=(wysokosc/2)-1;
szer+=1;


while(wys--){
wypisz_wiersz(szer,1,i,1);
szer+=1;
i-=2;
}

i-=1;
wypisz_wiersz(szer,1,0,0);
}


/* funkcja wypisuje podan¹ iloœæ spacji i gwiazdek */
void wypisz_wiersz(int spacja, int gwiazdka, int spacja2, int gwiazdka2){

while(spacja--)
printf(" ");

while(gwiazdka--)
printf("*");

while(spacja2--)
printf(" ");

while(gwiazdka2--)
printf("*");

printf("\n");
}
