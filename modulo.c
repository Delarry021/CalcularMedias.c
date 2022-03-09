#include "modulo.h"

void aritmetica() // Soma dos valores / Quantidade dos valores
{

    system("cls");
    printf("Media selecionada: Aritmetica\n\n");

    for(cont=0;cont < quantidade;cont++)
    {
        printf("Digite a nota (%i): ",cont+1);
        scanf("%f",&teste.numero[cont]);
    }

    for (cont=0;cont < quantidade;cont++)
    {
       media.total += (teste.numero[cont]);
    }
    media.total = (media.total/quantidade);
    printf("\nResultado = %.2f\n",media.total);
}

void ponderada() // Soma dos valores * medias / Quantidade dos valores
{

    system("cls");
    printf("Media selecionada: Ponderada\n\n");

    for(cont=0;cont < quantidade;cont++)
    {
        printf("Digite a nota (%i): ",cont+1);
        scanf("%f",&teste.numero[cont]);
    }

    for (cont=0;cont < quantidade;cont++)
    {
       printf("Entre com o peso %i: ",cont + 1);
       scanf("%i",&media.peso[cont]);
       media.total += (teste.numero[cont] * media.peso[cont]);
       media.pesosoma += media.peso[cont];
    }

    media.total = (media.total/media.pesosoma);

    printf("\nResultado = %.2f\n",media.total);
}

void harmonica() // Quantidade dos valores / 1 / valores
{

    system("cls");
    printf("Media selecionada: Harmonica\n\n");

    for(cont=0;cont < quantidade;cont++)
    {
        printf("Digite a nota (%i): ",cont+1);
        scanf("%f",&teste.numero[cont]);
    }

    for (cont=0;cont < quantidade;cont++)
    {
       media.total += (1/teste.numero[cont]);
    }
    media.total = (quantidade/media.total);
    printf("\nResultado = %.2f\n",media.total);
}

void programa()
{

    printf("Digite o tipo de media (A,P,H) : ");
    scanf("%c",&teste.letra);

    if ((teste.letra == 'A') || (teste.letra == 'P') || (teste.letra == 'H'))
    {

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
