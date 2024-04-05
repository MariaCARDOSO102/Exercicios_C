#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main ()
{
  system ("clear");

  float Nota1, Nota2, Nota3, media;

  printf ("Digite a primeira nota do aluno: ");
  scanf ("%f", &Nota1);
  
  printf ("Digite a segunda nota do aluno: ");
  scanf ("%f", &Nota2);
  
  printf ("Digite a terceira nota do aluno: ");
  scanf ("%f", &Nota3);

  media = (Nota1 + Nota2 + Nota3) / 3;
  
  printf("A média das notas é: %.1f\n\n", media);


}
