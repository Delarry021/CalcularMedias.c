#ifndef MODULO_H_INCLUDED
#define MODULO_H_INCLUDED
#define media1 5
#define media2 3
#define media3 2

//Definição de estruturas e inicialização de funções e veriáveis

typedef struct aluno
{
    char letra;
    float numero[3];
} aluno;

aluno teste;
float media;

void aritmetica();
void harmonica();
void ponderada();
void programa();

#endif // MODULO_H_INCLUDED
