int ArraySize = 4;

// Initialize the arrays
double PositiveIdentity[] = {1, 1, 1, 1};
double NegativeIdentity[] = {-1, -1, -1, -1};

double PositiveValues[] = {1, 2, 3, 4};
double NegativeValues[] = {-1, -2, -3, -4};

double PositiveFloatIdentity[] = {0.1, 0.1, 0.1, 0.1};
double NegativeFloatIdentity[] = {-0.1, -0.1, -0.1, -0.1};

double PositiveFloatValues[] = {0.1, 0.2, 0.3, 0.4};
double NegativeFloatValues[] = {-0.1, -0.2, -0.3, -0.4};

// Positive Identity
int Test01 = (DotProduct(ArraySize, PositiveIdentity, PositiveValues) == 10);
if (Test01 != 1)
{
  printf ("Test01 falhou.\n");
  return(1);
}

int Test02 = (DotProduct(ArraySize, PositiveIdentity, NegativeValues) == -10);
if (Test01 != 1)
{
  printf ("Test02 falhou.\n");
  return(1);
}

int Test03 = (DotProduct(ArraySize, PositiveIdentity, PositiveFloatValues) == 1);
if (Test01 != 1)
{
  printf ("Test03 falhou.\n");
  return(1);
}

int Test04 = (DotProduct(ArraySize, PositiveIdentity, NegativeFloatValues) == -1);
if (Test01 != 1)
{
  printf ("Test04 falhou.\n");
  return(1);
}

// Negative Identity
int Test05 = (DotProduct(ArraySize, NegativeIdentity, PositiveValues) == -10);
if (Test01 != 1)
{
  printf ("Test05 falhou.\n");
  return(1);
}

int Test06 = (DotProduct(ArraySize, NegativeIdentity, NegativeValues) == 10);
if (Test01 != 1)
{
  printf ("Test06 falhou.\n");
  return(1);
}

int Test07 = (DotProduct(ArraySize, NegativeIdentity, PositiveFloatValues) == -1);
if (Test01 != 1)
{
  printf ("Test07 falhou.\n");
  return(1);
}

int Test08 = (DotProduct(ArraySize, NegativeIdentity, NegativeFloatValues) == 1);
if (Test01 != 1)
{
  printf ("Test08 falhou.\n");
  return(1);
}

// Positive Float Identity
int Test09 = (DotProduct(ArraySize, PositiveFloatIdentity, PositiveValues) == 1);
if (Test01 != 1)
{
  printf ("Test09 falhou.\n");
  return(1);
}

int Test10 = (DotProduct(ArraySize, PositiveFloatIdentity, NegativeValues) == -1);
if (Test01 != 1)
{
  printf ("Test10 falhou.\n");
  return(1);
}

int Test11 = (DotProduct(ArraySize, PositiveFloatIdentity, PositiveFloatValues) == 0.1);
if (Test01 != 1)
{
  printf ("Test11 falhou.\n");
  return(1);
}

int Test12 = (DotProduct(ArraySize, PositiveFloatIdentity, NegativeFloatValues) == -0.1);
if (Test01 != 1)
{
  printf ("Test12 falhou.\n");
  return(1);
}

// Negative Float Identity
int Test13 = (DotProduct(ArraySize, NegativeFloatIdentity, PositiveValues) == -1);
if (Test01 != 1)
{
  printf ("Test13 falhou.\n");
  return(1);
}

int Test14 = (DotProduct(ArraySize, NegativeFloatIdentity, NegativeValues) == 1);
if (Test01 != 1)
{
  printf ("Test14 falhou.\n");
  return(1);
}

int Test15 = (DotProduct(ArraySize, NegativeFloatIdentity, PositiveFloatValues) == -0.1);
if (Test01 != 1)
{
  printf ("Test15 falhou.\n");
  return(1);
}

int Test16 = (DotProduct(ArraySize, NegativeFloatIdentity, NegativeFloatValues) == 0.1);
if (Test01 != 1)
{
  printf ("Test16 falhou.\n");
  return(1);
}

printf("Todos os testes foram efetuados com sucesso.\n");
