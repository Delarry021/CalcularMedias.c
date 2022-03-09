#ifndef MODULO_H_INCLUDED
#define MODULO_H_INCLUDED

// VALORES DOS PESOS NA MEDIA PONDERADA

#define quantidade 5 //quantidade de valores (PADRÂO 5)

//Definição de estruturas e inicialização de funções e veriáveis

typedef struct aluno
{
    char letra;
    float numero[quantidade];
} aluno;

typedef struct medias
{
    int peso[quantidade];
    int pesosoma;
    float total;
} medias;

int cont;

aluno teste;
medias media;

void aritmetica();
void harmonica();
void ponderada();
void programa();

#endif // MODULO_H_INCLUDED
