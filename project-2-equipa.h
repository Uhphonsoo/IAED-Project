/*
 * Ficheiro: equipa.h
 * Autor: Joao Afonso Alves Henriques e Silva, #90398
 * Descricao: 2o Projeto em C para IAED :
 *  Sistema de Gestão de uma Base de Dados de Jogos de Futebol Amigáveis
*/

#ifndef _EQUIPA_
#define _EQUIPA_

/* Estrutura equipa */
typedef struct equipa {
    char* nome;
    int   numeroVitorias;
} equipa;

equipa* criaEquipa(char* nome);
void    freeEquipa(equipa* Equipa);
void    printEquipa(equipa* Equipa, int* pNL);

#endif
