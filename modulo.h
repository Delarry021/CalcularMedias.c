#ifndef MODULO_H_INCLUDED
#define MODULO_H_INCLUDED
#define media1 5
#define media2 3
#define media3 2

//Defini��o de estruturas e inicializa��o de fun��es e veri�veis

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
