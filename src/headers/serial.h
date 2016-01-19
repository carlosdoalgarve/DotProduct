double
DotProduct (int ArraySize, double * ArrayOne, double * ArrayTwo)
{
  int Index = 0;
  double Result = 0;

  for (Index = 0;
       Index < ArraySize;
       Index++)
  {
    Result += ArrayOne[Index] * ArrayTwo[Index];
  }

  return(Result);
}
