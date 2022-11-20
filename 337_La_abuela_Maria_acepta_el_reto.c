#include<stdio.h>
void main()
{
int diente, diente1, i, j, k, acum, acum1, diente_Superio[6], diente_Inferior[6], ident,  ident1;
//float azul 

// printf("\nDame el numero del primer tipo de diente \n");
// scanf("%d", &diente);
// printf("\nDame el numero del segundo tipo de diente \n");
// scanf("%d", &diente1);
ident=0;
j=0;
k=0;
diente=0;
diente1=0;

    // else
        // {
        printf("\nDame seis numeros de los dientes Superiores y presiona enter \n");
        for (i=0;i<=5;i++)
        {
        printf("\nDame diente %d \n");
        scanf("%d", &diente);
        if (diente>2000 || diente1>2000 )
        printf("\nNumero de dientes fuera de rango, coloca 2 numeros numeros inferiores o iguales a 2,000 \n");
        else 
        {
            diente_Superio[k]=diente;
            k+1;
        }
        }
         printf("\nDame seis numeros de los dientes Inferiores y presiona enter\n");
        for (i=0;i<=5;i++)
        {
        printf("\nDame diente %d \n");
        scanf("%d", &diente1);
        if (diente>2000 || diente1>2000 )
        printf("\nNumero de dientes fuera de rango, coloca 2 numeros numeros inferiores o iguales a 2,000 \n");
        else 
        {
            diente_Inferior[j]=diente1;
            j+1;
        }
        }
        ident=0;
    for (i=0;i<6;i++)
        
        {
                if ((diente_Inferior[i]) == (diente_Superio[i]) )
                ident++;
        }
    if (ident<=1)

    printf("\n %d SI \n", ident);
        
    if (ident>1)
        printf("\n%d NO \n", ident);
        

    // }
}
