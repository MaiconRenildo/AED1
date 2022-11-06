#include<stdio.h>

int fibonacci(int n){
  if ((n ==1) || (n==2))
    return 1;
  else
    return( fibonacci(n - 1) + fibonacci(n - 2));
}

int main(){
  int num;
  printf("Informe o número:\n");
  scanf("%d",&num);
  printf("Fibonacci de %d é: %d", num, fibonacci(num));
}