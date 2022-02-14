#include<stdio.h>
int input()
{
  int a;
  printf("compare 3 numbers\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if(a>b && a>c) 
  {
    return a;
  }
  else if(b>a && b>c)
  {
   return  b;
  }
  else
  {
    return c;
  }
}
void output(int a,int b,int c,int largest)
{
  printf("largest number among %d %d %d is %d\n",a,b,c,largest);
}
int main()
{
  int a,b,c,large;
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  output(a,b,c,large);
  return 0;
}