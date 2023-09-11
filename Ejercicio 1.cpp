//Cesar Alejandro Velazquez Mercado
//372329
//Es Chimchampu pero contra la maquina
//10/09/2023
#include <stdio.h>
#include <stdlib.h>
int msges();
void menu();
int main()
{
   menu();

	return 0;
}
int msges()
{ int op;
  //system ("CLS");
  printf ("  DAME UN VALOR ENTERO \n");
  scanf ("%d",&op);
  return op;
}

void menu()
{
  int op;
  op=msges();
  do{     
      printf("%d ",op);
      op--;
    }while (op != 0);


}
