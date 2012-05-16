/* szukanie imion o podanym przez u¿ytkownika prefixie */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_names(char* dict[]);
void get_prefix(char* prefix);
void display_names(char* dict[], char* prefix, int loaded_number);

int main(int argc, char* argv[]){
  char *dict[4960];
  char prefix[20];
  int size = 0;
  
  printf("Podaj slownik imion: \n");

  size = get_names(dict);

  printf("Wczytano %d imion\n",size);
  
  printf("Podaj prefiks szukanych imion: ");

  get_prefix(prefix);

  printf("Imiona zaczynajace sie na %s:\n",prefix);

  display_names(dict,prefix,size);
  
  return 0;
}

int get_names(char *dict[]){
  char temp[20];
  
  int i = 0;
  while(scanf("%s",temp) == 1){
    dict[i] = (char* )malloc((int)strlen(temp)*sizeof(char));
    strcpy(dict[i],temp);
    i++;
  }
  return i;

}
void get_prefix(char *prefix){
  scanf("%s",prefix);
}
void display_names(char* dict[], char* prefix, int loaded_number){
  int i;
  for(i = 0 ; i < loaded_number; i++){
if (!strncmp (dict[i], prefix, strlen (prefix)))
printf("%s\n",dict[i]);
  }

}