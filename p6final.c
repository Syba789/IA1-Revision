#include<stdio.h>
void input_two_string(char *a,char *b)
{
  printf("enter two strngs\n");
  scanf("%s%s",a,b);
}
int strcmp(char *a,char *b)
{
  for(int i=0; a[i]!='\0' || b[i]!='\0'; i++)
  {
    if (a[i]>b[i])
    {
      return 1;
    }
    else if(a[i] < b[i])
    {
      return -1;
    } 
    return 0;
  }
}
void output(char *a,char *b,int result)
{
  if(result>0)
   printf("%s is greater than %s\n",a,b);
  else if(result ==0)
   printf("%s is equal to %s",a,b);
  else
   printf("%s is greater tha %s\n",b,a);
}
int main()
{
  char a[50],b[50];
  input_two_string(a,b);
  output(a,b,strcmp(a,b));
  return 0;
}
