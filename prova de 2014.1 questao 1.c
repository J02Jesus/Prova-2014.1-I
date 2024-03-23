#include <stdio.h>

int main(void) {
  int numero;
  int oc1, oc2, oc3;
  int sp1, sp2, sp3;
  
  
  printf("digite um numero\n");
  scanf("%d", &numero);
  if(numero>0&&numero<=777){
    sp1=numero/100;
    sp2=(numero/10)%10;
    sp3=(numero/1)%10;

    oc1=(sp1*64)+(sp2*8)+sp3*1;
  
    printf("\n\n%d\n\n", oc1);
  }
  
  return 0;
}