#include <stdio.h>
int a,b;
int multiplica(){
  return a*b;
}
int main(){
  int res;
  printf("Informe dois números: ");
  scanf("%d%d",&a,&b);
  res=multiplica();
  printf("%d",res);
}