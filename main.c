#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VOGAL 10

main() {
  char palavra[255];
  char vog[VOGAL] = "aeiouAEIOU";
  int x, y, tamp=0, tamv=0, tamc=0, tams=0, tampalavra=0;
  int vogais, conso, contp=0;
  printf("Digite uma palavra ou frase: ");
  gets(palavra);
  tamp = strlen(palavra);
  if(palavra[0] == ' '){
    tampalavra--;
  }
  for(x = 0; x < tamp; x++){
    vogais = 0;
    conso = 0;
    for(y = 0; y < VOGAL; y++){
      if(vog[y] == palavra[x]){
        vogais++;
      }
      if(vog[y] != palavra[x] && palavra[x] != ' '){
        conso++;
      }
    }
    if(contp == 0 && palavra[x] == ' '){
      tampalavra++;
    }
    if(palavra[x] == ' '){
      tams++;
      contp = 1;
    }
    else{
      contp = 0;
    }
    if(vogais > 0){
      tamv++;
    }
    if(conso == VOGAL){
      tamc++;
    }
  }
  if(palavra[tamp - 1] != ' '){
    tampalavra++;
  }
  printf("\nO tamanho da palavra/frase é: %i\n", tamp);
  printf("Nº de vogais é: %i\n", tamv);
  printf("Nº de consoantes é: %i\n", tamc);
  printf("Nº de espaços é: %i\n", tams);
  printf("Nº de palavras: %i\n", tampalavra);
}