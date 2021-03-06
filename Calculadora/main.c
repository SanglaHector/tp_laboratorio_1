#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaDos.h"
#include "bibliotecaDos.c"

float sumar(float nUno,float nDos);
float restar( float nUno ,  float nDos);
float multiplicar(float nUno , float nDos);
float dividir(float nUno ,  float nDos);
float factorizar(float nUno);
float ingresar ();


int main()
{
    float numeroUno;
    float numeroDos;
    int opcion;

    do
    {
        system("color f0");
        printf("|   1.Ingrese el primer operando (A=%.2f)   |\n",numeroUno);
        printf("|   2.Ingrese el segunro operando (B=%.2f)  |\n",numeroDos);
        printf("|   3.Calcular todas las operaciones        |\n");
        printf("|   4.Informar resultados                   |\n");
        printf("|   5.Salir.                                |\n");

        scanf("%d", &opcion);


        switch ( opcion )
        {
        case 1:
            numeroUno = ingresar();
            break;

        case 2:
            numeroDos = ingresar();
            break;

        case 3:
            system("cls");
            printf("|   Calculando la suma... ( %.2f + %.2f )          |\n",numeroUno , numeroDos);
            printf("|   Calculando la resta... ( %.2f - %.2f )         |\n",numeroUno , numeroDos);
            printf("|   Calculando la multiplicacion... ( %.2f * %.2f) |\n",numeroUno , numeroDos);
            printf("|   Calculando la division... ( %.2f / %.2f )      |\n",numeroUno , numeroDos);
            printf("|   Calculando factorial... (!%.2f)              |\n",numeroUno);
            printf("|   Calculando factorial... (!%.2f)              |\n",numeroDos);
            printf("\n");

            system("pause");
            system("cls");
            break;
        case 4:

            system("cls");

            printf("|     Sus resultados son:       |\n");
            printf("Sus operandos son A=%.2f y B=%.2f \n", numeroUno , numeroDos);
            printf("La suma es de: %.2f\n", sumar( numeroUno , numeroDos ));
            printf("La resta es de: %.2f\n", restar ( numeroUno , numeroDos ));
            printf("La multiplicacion es de: %.2f \n", multiplicar( numeroUno , numeroDos ));

            if( numeroDos == 0)
            {
                printf("La division por cero no esta definida.\n");
            }else
            {
                printf("La division es de: %.2f \n", dividir( numeroUno , numeroDos ));
            }


            if ( numeroUno < 0 )
            {
                printf("El factorial no existe en los negativos \n");
            }else
            {
                 printf("El factorial del primer operando es: %.2f \n", factorizar(numeroUno));
            }


           if ( numeroDos <0 )
           {
               printf("El factorial no esta definido en los negativos \n");
           }else
           {
                printf("El factorial del segundo operando es: %.2f \n", factorizar(numeroDos));
           }

            system("pause");
            system("cls");
            break;
        case 5:
            exit("n");
            break;
        }
    }
        while(opcion >= 1 && opcion <= 5 );

        printf("Opcion incorrecta\n");

    return 0;
}
