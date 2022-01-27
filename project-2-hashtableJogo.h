/*
 * Ficheiro: hashtableJogo.h
 * Autor: Joao Afonso Alves Henriques e Silva, #90398
 * Descricao: 2o Projeto em C para IAED :
 *  Sistema de Gestão de uma Base de Dados de Jogos de Futebol Amigáveis
*/

#ifndef _HASHJOGO_
#define _HASHJOGO_

#include "listaJogo.h"

listaJogo** criaHashTableJogo(int M_J);
void        freeHashTableJogo(listaJogo** headsJogos, int M_J);

listaJogo** insereHashTableJogo(listaJogo** headsJogos, jogo* Jogo, int M_J);
listaJogo** removeHashTableJogo(listaJogo** headsJogos, char* nome, int M_J);

jogo*       procuraHashTableJogo(listaJogo** headsJogos, char* nome, int M);
int         jogoExiste(listaJogo** headsJogos, char* nome, int M_J);

#endif
