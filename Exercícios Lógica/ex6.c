#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main ()
{
  system ("clear");

  int IdadeAnos, IdadeMeses, IdadeDias, IdadeHoras, IdadeMinutos;

  printf ("Digite sua idade em anos: ");
  scanf ("%d", &IdadeAnos);
  
  IdadeMeses = IdadeAnos * 12;
  
  printf("A sua idade em meses é: %d\n", IdadeMeses);
  
  IdadeDias = IdadeAnos * 365;
  
  printf("A sua idade em dias é: %d\n", IdadeDias);
   
  IdadeHoras = IdadeDias * 24;
  
  printf("A sua idade em horas é: %d\n", IdadeHoras);
  
  IdadeMinutos = IdadeHoras * 60;
  
  printf("A sua idade em minutos é: %d\n", IdadeMinutos);
}