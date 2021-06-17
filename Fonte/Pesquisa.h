#ifndef PESQUISA_H
#define PESQUISA_H
//====================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//====================================
typedef struct Pessoa
{
  char regiao[30];//1
  char estado[30];
  char municipio[30];
  char codUf[30];
  char codMun[30];
  char codRegiaoSaude[30];
  char nomeRegiaoSaude[30];
  char data[30];
  char semanaEpidemia[30];
  char populacao[30];
  char casosAcumulados[30];
  char casosNovos[30];
  char obitosAcumulados[30];
  char obitosNovos[30];
  char recuperadosNovos[30];
  char emAcompanhamentoNovos[30];
  char interiorOUmetropolitano[30];//17
}Pessoa;
//====================================
#endif // PESQUISA_H
//====================================