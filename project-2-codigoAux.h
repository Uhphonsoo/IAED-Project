/*
 * Ficheiro: codigoAux.h
 * Autor: Joao Afonso Alves Henriques e Silva, #90398
 * Descricao: 2o Projeto em C para IAED :
 *  Sistema de Gestão de uma Base de Dados de Jogos de Futebol Amigáveis
*/

#ifndef _AUX_
#define _AUX_

#define MAXCAR 4000 /* Numero maximo de carateres num comando */

void  copia_String(char* destino, char* origem);
char* duplicaString(char* string);
int   hash(char* v, int M);

#endif
