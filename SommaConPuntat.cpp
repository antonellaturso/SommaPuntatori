#include <stdio.h>
#include <stdlib.h>
main()
{
 	  int n1, n2, s;
 	  int *pi1;
 	  int *pi2;
 	  int *ps;
 	  pi1=n1;
 	  pi2=n2;
 	  printf("inserisci i valori dei numeri da sommare");
 	  scanf("\n%d", &n1);
 	  scanf("\n%d", &n2);
 	  s=*pi1+*pi2;//s=n1+n2
 	  ps=&s;
 	  printf("\nvalore indirizzo pi: %p", pi1);//stampa l'indirizzo
 	  printf("\nvalore indririzzo pi2: %p", pi2);
 	  printf("\nvalore indririzzo somma: %p", ps);
 	  printf("\nvalore di pi: %d", *pi1);//stampa il valore del numero
 	  printf("\nvalore di pi2: %d", *pi2);
 	  printf("\nvalore somma: %d", s);
 	  printf("\nvalore somma: %d", *ps);
	  printf("\nvalore di x2: %d", n2);
	  printf("\nvalore di x: %d", n1);//dato pi2=pi, entrambi i puntatori puntanno alla stessa cella di memoria, 
	  //modificando pi2, si modifica anche pi e quindi x
}
