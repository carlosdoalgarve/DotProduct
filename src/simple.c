#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
  int ArraySize = 0;
  if ((ArraySize = atoi(argv[1])) == 0)
  {
    return(1);
  }

  double * ArrayOne = (double *) malloc (sizeof(double) * ArraySize);
  double * ArrayTwo = (double *) malloc (sizeof(double) * ArraySize);

  int Index = 0;
  double Result = 0;

  for (Index = 0;
       Index < ArraySize;
       Index++)
  {
    scanf("%lf", &ArrayOne[Index]);
  }

  for (Index = 0;
       Index < ArraySize;
       Index++)
  {
    scanf("%lf", &ArrayTwo[Index]);
  }

  for (Index = 0;
       Index < ArraySize;
       Index++)
  {
    Result += ArrayOne[Index] * ArrayTwo[Index];
  }

  printf ("Resultado: %lf\n", Result);

  return(0);
}
