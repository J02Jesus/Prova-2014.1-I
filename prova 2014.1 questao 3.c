#include <stdio.h>

int main() {
int media, nota1, nota2, nota3;
  
  printf("nota da 1, 2 e 3 unidade:\n\n");
  scanf("%d %d %d", &nota1, &nota2, &nota3);

  media=(nota1+nota2+nota3)/3;
  if(media>=7){
    printf("media eh:%d aluno passado de ano", media);
  }else{ 
  printf("media eh:%d aluno passado para a reprovacao", media);
    }
  return 0;
}