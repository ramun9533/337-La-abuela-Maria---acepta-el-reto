#include<stdio.h>
void main()
{
int diente, diente1, i, j, k, acum, acum1, diente_Superio[6], diente_Inferior[6];
//float azul 

printf("\nDame el numero del primer tipo de diente \n");
scanf("%d", &diente);
printf("\nDame el numero del segundo tipo de diente \n");
scanf("%d", &diente1);
k=0;
if (diente>2000 || diente1>2000 )
printf("\nNumero de dientes fuera de rango, coloca 2 numeros numeros inferiores o iguales a 2,000 \n");
    else
        {
        printf("\nDame seis numeros de los dientes Superiores y presiona enter \n");
        for (i=0;i<=5;i++)
        {
        printf("\nDame diente %d \n");
        scanf("%d", &diente1);

        }
         printf("\nDame seis numeros de los dientes Inferiores y presiona enter\n");
        for (i=0;i<=5;i++)
        {
        printf("\nDame diente %d \n");
        scanf("%d", &diente1);

        }
    }
}