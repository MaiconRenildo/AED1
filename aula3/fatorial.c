#include<stdio.h>
int fatorial(int n){
  int fat=n;
  int i;
  for(i=n-1; i>1; i--){
    fat = fat * i;
  }
  return fat;
}

int main(){
  int num;
  printf("Informe o número:\n");
  scanf("%d",&num);
  printf("Fatorial de %d é: %d", num, fatorial(num));
}