#include "Pesquisa.h"
//==============================================
void Loaded(){
//==============================================
  FILE *arquivo;
//==============================================
  arquivo = fopen("D:\GitHub\ConsultaCovid\Fonte\Tabelas\MG.txt", "r");
//==============================================
  if(arquivo == NULL)
  {
    printf("ERRO! O ARQUIVO NAO EXISTE!\n");
  }
  Pessoa nova;
  char geral[200];
  char *sub;
  int i = 0;
//==============================================
  while(fgets(geral,100,arquivo)!= NULL)
  {
    printf("%s",geral);
    sub = strtok(geral,";");
    strcpy(nova.regiao,sub);
    sub = strtok(NULL,";");
    strcpy(nova.estado,sub);
    sub = strtok(NULL,";");
    strcpy(nova.municipio,sub);
    sub = strtok(NULL,";");
    strcpy(nova.codUf,sub);
    sub = strtok(NULL,";");
    strcpy(nova.codMun,sub);
    sub = strtok(NULL,";");
    strcpy(nova.codRegiaoSaude,sub);
    sub = strtok(NULL,";");
    strcpy(nova.nomeRegiaoSaude,sub);
    sub = strtok(NULL,";");
    strcpy(nova.data,sub);
    sub = strtok(NULL,";");
    strcpy(nova.semanaEpidemia,sub);
    sub = strtok(NULL,";");
    strcpy(nova.populacao,sub);
    sub = strtok(NULL,";");
    strcpy(nova.casosAcumulados,sub);
    sub = strtok(NULL,";");
    strcpy(nova.casosNovos,sub);
    sub = strtok(NULL,";");
    strcpy(nova.obitosAcumulados,sub);
    sub = strtok(NULL,";");
    strcpy(nova.obitosNovos,sub);
    sub = strtok(NULL,";");
    strcpy(nova.recuperadosNovos,sub);
    sub = strtok(NULL,";");
    strcpy(nova.emAcompanhamentoNovos,sub);
    sub = strtok(NULL,";");
    strcpy(nova.interiorOUmetropolitano,sub);
    sub = strtok(NULL,"\n");
    printf("(%d)", i);
    printf("%s;", nova.regiao);
    printf("%s;", nova.estado);
    printf("%s;", nova.municipio);
    printf("%s;", nova.codUf);
    printf("%s;", nova.codMun);
    printf("%s;", nova.codRegiaoSaude);
    printf("%s;", nova.nomeRegiaoSaude);
    printf("%s;", nova.data);
    printf("%s;", nova.semanaEpidemia);
    printf("%s;", nova.populacao);
    printf("%s;", nova.casosAcumulados);
    printf("%s;", nova.casosNovos);
    printf("%s;", nova.obitosAcumulados);
    printf("%s;", nova.obitosNovos);
    printf("%s;", nova.recuperadosNovos);
    printf("%s;", nova.emAcompanhamentoNovos);
    printf("%s\n", nova.interiorOUmetropolitano);
    i++;
}
//==============================================
  printf("\n");
//==============================================
  fclose(arquivo);
//==============================================
}