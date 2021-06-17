# Consulta Covid

## Links úteis
[Painel Coronavírus](https://covid.saude.gov.br/)
## Objetivo
'Consulta de dados' é um programa desenvolvido com objetivo desta atividade prática é exercitar o uso de estrutura de dados para recuperar informações em memória principal. Além de auxiliar na análise da evolução e impacto da doença em nossa sociedade. 
## Participantes
 - Lincoln Corrêa Figueiredo Cruz | [LincolnCFCruz](https://github.com/LincolnCFCruz)
 - Pedro Igor Martins dos Reis | [ORZAYAZ](https://github.com/ORZAYAZ)
 - Rafaela Mesquita Gontijo | [rafamesquita](https://github.com/rafamesquita)
 - Rafael Brandão Nunes | [RafaelBrandao13](https://github.com/RafaelBrandao13)

## Professor:
 - Kleber Souza | [ProfKleberSouza](https://github.com/ProfKleberSouza)
## Referência
[Canvas PUC Minas](https://pucminas.instructure.com/courses/53903/assignments/287136)
## Requisitos
 ```bash
 # Sistemas baseados no Debian
 sudo apt install -y gcc git cmake
 # Sistemas baseados no RHEL
 sudo dnf install -y gcc git cmake
 # Sistemas baseados no Arch Linux
 sudo pacman -S gcc git cmake
 # Void Linux
 sudo xbps-install -S gcc git cmake
 # Solus OS
 sudo eopkg install gcc git cmake
```
## Como executar
```
git clone https://github.com/ORZAYAZ/ConsultaCovid

Para a versão de ponteiros:
cd ConsultaCovid/Fonte/
gcc -o Main arvoreCovid.c main.c
./Main
```
