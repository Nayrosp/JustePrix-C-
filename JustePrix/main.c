#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

unsigned int fact (unsigned int x);

int main (void)
{
    // initialisation du tirage au sort
    srand(time(NULL));
    // Tirage au sort
    unsigned int i=0, n, secret = rand() % MAX+1;

    //printf("Nombre secret : %d\n",secret);
do{
  
  printf ("Veuillez saisir un nombre : ");
  scanf ("%u", &n);
  
  if (n>secret)
  {
      printf ("%u est trop grand\n", n);
  }
  else if (n<secret)
  {
      printf ("%u est trop petit\n", n);
  }
  i++;
}while (n!=secret);
printf ("VOUS AVEZ TROUVE !!! en %u coups",i);

  return 0;
}

// Exemple de recursivité avec la fonction factorielle
unsigned int fact( unsigned int x)
{
    if (x==0) return 1;
    return (x * fact(x-1));
}
