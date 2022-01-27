/*
 * Ficheiro: equipa.c
 * Autor: Joao Afonso Alves Henriques e Silva, #90398
 * Descricao: 2o Projeto em C para IAED :
 *  Sistema de Gestão de uma Base de Dados de Jogos de Futebol Amigáveis
*/

#include "codigoAux.h"
#include "equipa.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Aloca memoria para uma equipa e inicializa-a */
equipa* criaEquipa(char* nome) {
    equipa* novaEquipa;
    novaEquipa = (equipa*)malloc(sizeof(equipa)); /* ERRADO! DEVIA SER malloc(sizeof(struct(equipa)))
                                                NAO ESTA A ALOCAR O ESPACO CERTO */

    /* Aloca memoria para a string e inicializa-a */
    novaEquipa->nome = duplicaString(nome);
    novaEquipa->numeroVitorias = 0;

    return novaEquipa;
}

/* Liberta uma equipa e toda a memoria associada */
void freeEquipa(equipa* Equipa) {
    free(Equipa->nome);
    free(Equipa);
}

/* Imprime os parametros de uma equipa */
void printEquipa(equipa* Equipa, int* pNL) {
    printf("%d %s %d\n", *pNL, 
                         Equipa->nome, 
                         Equipa->numeroVitorias);
}
