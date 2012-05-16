/* program zliczaj¹cy liczbê wyst¹pieñ wszystkich s³ów tekstu czytanego ze standardowego wejœcia. 
Po zliczeniu liczby wyst¹pieñ s³ów, program powinien je wypisaæ w porz¹dku alfabetycznym. */


#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define  MAXWORD  100
#define  BUF	  100

struct tnode
 {
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
 };

struct tnode *addtree(struct tnode *, char *);
struct tnode *talloc(void);
char *strdup1(char *);
void treeprint(struct tnode *);
int getword(char *, int);
int getch(void);
void ungetch(int c);

char buf[BUF];
int bufp=0;

/* zliczanie wyst¹pieñ s³ów */
int main()
{
  struct tnode *root;  /* korzeñ drzewa */
  char word[MAXWORD];

  root = NULL; /* na pocz¹tek puste drzewo */
  while (getword(word, MAXWORD) != EOF)
   if (isalpha(word[0]))
     root = addtree(root, word);
  treeprint(root);
  return 0;
}

/* addtree: dodaj wêze³ dla w; szukaj s³owa w w p lub poni¿ej p */
struct tnode *addtree(struct tnode *p, char *w)
{
  int cond;

  if (p==NULL)
    {
       p = talloc();
       p->word = strdup1(w);
       p->count = 1;
       p->left = p->right = NULL;
    }
  else if ((cond = strcmp(w, p->word)) == 0)
    p->count++;
  else if (cond < 0)
    p->left = addtree(p->left, w);
  else
    p->right = addtree(p->right, w);
  return p;
}


/* treeprint: wypisz uporz¹dkowane drzewo */
void treeprint(struct tnode *p)
 {
   if (p != NULL)
    {
      treeprint(p->left);
      printf("%4d %s\n", p->count, p->word);
      treeprint(p->right);
    }
}

struct tnode *talloc(void)
 {
   return (struct tnode *) malloc(sizeof(struct tnode));
 }

char *strdup1(char *s)
{
  char *p;

  p = (char *) malloc(strlen(s)+1);
  if (p != NULL)
    strcpy(p,s);
  return p;
}


/* getword: weŸ nastêpne s³owo ze standardowego wejœcia */
int getword(char *word, int lim)
 {
   int c, getch(void);
   void ungetch(int);
   char *w = word;

   while (isspace(c=getch()));

   if(c!=EOF) *w++=c;
   if(!isalpha(c))
     { *w = '\0';
       return c;
     }

   for( ; --lim > 0; w++)
    if (!isalnum(*w = getch()))
    {
       ungetch(*w);
       break;
    }
   *w = '\0';

   return word[0];
 }

int getch(void)
 {
    return (bufp > 0) ? buf[--bufp] : getchar();
 }

void ungetch(int c)
 {
   if (bufp >= BUF) printf("ungetch: too many characters\n");
   else
     buf[bufp++]=c;
}