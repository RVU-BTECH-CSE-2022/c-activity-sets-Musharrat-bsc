# include<stdio.h>
int sum(int a,int b);
int main(){
  int a,b;
  printf("Enter two number:");
  scanf("%d%d",&a,&b);
  int result=sum(a,b);
  printf("The addittion of two number:%d",result);
  return 0;
}
int sum(int a,int b)
{
int result = a+b;
return  result;
}