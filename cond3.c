#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[])
{   setlocale (LC_ALL, "");

    float num, quad;
    
    printf ("Informe um n�mero real: ");
    scanf ("%f", &num);
    
    if (num>=0)
    {
     num = sqrt(num);
     printf ("A ra�z quadrada do n�mero informado �: %.2f\n", num);
     }else
     {
     quad = pow(num,2);
     
     printf ("O n�mero informado,ao quadrado �: %.2f\n", quad);
     }
  
  system("PAUSE");	
  return 0;
}
