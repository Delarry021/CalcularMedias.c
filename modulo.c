#include "modulo.h"


void aritmetica() // Soma dos valores / Quantidade dos valores
{
    media = (teste.numero[1] + teste.numero[2] + teste.numero[3])/3;
    printf("Resultado = %.2f\n",media);
}

void ponderada() // Soma dos valores * medias / Quantidade dos valores
{
    media = ((teste.numero[1] * media1) + (teste.numero[2] * media2) + (teste.numero[3] * media3))* 0.1;
    printf("Resultado = %.2f\n",media);
}

void harmonica()
{
    media = 3/((1/teste.numero[1]) + (1/teste.numero[2]) + (1/teste.numero[3]));
    printf("Resultado = %.2f\n",media);
}

void programa()
{
    printf("Digite o tipo de media (A,P,H) : ");
    scanf("%c",&teste.letra);

    if ((teste.letra == 'A') || (teste.letra == 'P') || (teste.letra == 'H'))
    {
        printf("Digite as 3 notas:\n");
        scanf("%f%f%f",&teste.numero[1],&teste.numero[2],&teste.numero[3]);

        switch(teste.letra)
        {
            case 'A':
            {
                aritmetica();
                break;
            }
            case 'P':
            {
                ponderada();
                break;
            }
            case 'H':
            {
                harmonica();
                break;
            }
            default:
            {
                system("cls");
                printf("Invalido\n");
            }
        }
    } else
            {
                system("cls");
                printf("Invalido\n");
            }

        system("PAUSE");

}
