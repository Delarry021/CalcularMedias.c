#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/* CONTADOR DE CARACTERE

void main()
{
    char string[100];
    int i;

    scanf("%s",&string);

    for (i=0;string[i] != '\0';i++); //contador de caracteres
    printf("%d",i);
}

*/

/* INVERTER STRINGS

void main()
{

    char string[100];
    int i,tamanho;

    fgets(string,100,stdin);
    tamanho = strlen(string);

    for (i=tamanho;i >= 0;i--)
    {
        printf("%c",string[i]);
    }

}

*/

/* VERIFICAR SE TEM VOGAL E TIRAR

void main()
{

    char string[100];
    int i;

    fgets(string,100,stdin);

    for (i=0;string[i] != '\0';i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            string[i] = '\0';
        } else printf("%c",string[i]);
    }

}

*/

/* CALCULAR VOGAIS - SUBSTITUIR POR UM CARACTERE

void main()
{

    char caractere;
    char string[100];
    int i;
    int cont = 0;

    printf("Entre com a string: ");
    fgets(string,100,stdin);

    for (i=0;string[i] != '\0';i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            string[i] = '1';
            cont++;
        }
    }

        printf("Quantidade de vogais: %d\n",cont);
        printf("Entre com o caractere: ");
        scanf("%c",&caractere);

    for (i=0;string[i] != '\0';i++)
    {
        if (string[i] == '1' )
        {
            string[i] = caractere;
        }

    }

    printf("%s",string);
}

*/

/* SUBSTITUIR UMA LETRA NA STRING POR OUTRA

void main ()
{

    char string[51];
    char L1,L2;

    fgets(string,51,stdin);
    printf("Entre com L1: ");
    scanf("%c",&L1);
    fflush(stdin);
    printf("Entre com L2: ");
    scanf("%c",&L2);

    for (int i=0;string[i] != '\0';i++)
    {
        if (string[i] == L1)
        {
            string[i] = L2;
        }
    }

    printf("%s",string);

}

/* PEGAR NOME E IDADE E ORGANIZAR AS IDADES EM ORDEM CRESCENTE

void main ()
{
    int idade[10];
    char nomes[10][50];

    int i,j1,j2;
    int menor,aux;


    for (int i=0;i<10;i++)
    {

            printf("Digite o nome: ");
            scanf("%s",&nomes[i]);
            fflush(stdin);
            printf("Digite a idade: ");
            scanf("%d",&idade[i]);

    }

    for(j1=1; j1 < 10;j1++)
    {
        for(j2=0;j2 < 9;j2++)
        {
            if(idade[j2] > idade[j2+1])
            {
                aux=idade[j2];

                idade[j2] = idade[j2+ 1];

                idade[j2+1] = aux;
            }
        }
    }

    for (int i=0;i<10;i++)
    {

        printf("%i\n",idade[i]);

    }

}

*/

/* CIFRA DE CESAR

void main ()
{
    char string[100];

    fgets(string,100,stdin);

    for (int cont = 0;string[cont] != '\0'; cont++ )
    {
        if (string[cont] != ' ')
        {
          string[cont] -= 29;
          printf("%c",string[cont]);
        } else printf("%c",string[cont]);

    }

}

*/

//STRCMP => COMPARADOR
//STRCAT => JUNTA AS DUAS STRINGS EM UMA
//STRLEN => PEGA TAMANHO DA STRING EM UM INTEIRO
//STRCPY => COPIA UMA STRING PRA OUTRA
//FGETS => SCANF DE STRING FGETS(nome,tamanho,stdin);










