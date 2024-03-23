#include <stdio.h>

int main() {
 int uni, dez, dia, mes;
  
  printf("digite o dia e o mes:\n");
  scanf("%d %d", &dia, &mes);

  if(dia>29&&mes==2){
    printf("erro");
  }else if(dia>0&&dia<=31){ 
  uni=dia%10;
  dia/=10;
  dez=dia%10;
    
  if(dez==1){ 
  switch(uni){ 
    case 0:
  printf("dez");
    break;
  case 1:
  printf("onze");
    break;
  case 2:
  printf("doze");
    break;
  case 3:
  printf("treze");
    break;
    case 4:
  printf("quartoze");
    break;
  case 5:
  printf("quinze");
    break;
  case 6:
  printf("dezesseis");
    break;
    case 7:
  printf("dezessete");
    break;
    case 8:
  printf("dezoito");
    break;
    case 9:
  printf("dezenove");
    break;
  }
  }else if(dez!=0){ 
    switch(dez){
      case 2:
  printf("vigessimo");
    break;
case 3:
  printf("trigessimo");
    break;
    }
 
  if(dez!=1)
    switch(uni){
      case 1:
  printf(" primeiro");
    break;
      case 2:
  printf(" segundo dia");
    break;
      case 3:
  printf(" terceiro dia");
    break;
      case 4:
  printf(" quarto dia");
    break;
      case 5:
  printf(" quinto dia");
    break;
      case 6:
  printf(" sexto dia");
    break;
      case 7:
  printf(" setimo dia");
    break;
      case 8:
  printf(" oitavo dia");
    break;
      case 9:
  printf(" nono dia");
    break;
    }
  }
}else{ 
printf("erro");
}
if(dia>29&&mes==2){
    printf("erro");
}else if(mes>0&&mes<=12){
  switch(mes){

    case 1:
  printf(" janeiro");
    break;
    case 2:
  printf(" fevereio");
    break;
    case 3:
  printf(" marco");
    break;
    case 4:
  printf(" abril");
    break;
  case 5:
  printf(" maio");
    break;
  case 6:
  printf(" junho");
    break;
    case 7:
  printf(" julho");
    break;
  case 8:
  printf(" agosto");
    break;
    case 9:
  printf(" setembro");
    break;
  case 10:
  printf(" outubro");
    break;
    case 11:
  printf(" novembro");
    break;
    case 12:
  printf(" dezembro");
    break;
  }
    }
}