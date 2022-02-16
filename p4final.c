#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the length of array\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  for( int i=0; i<n; i++)
  {
    printf("enter the number to input\n");
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n,int a[n])
{
  int sum=0;
  for(int i=0; i<n; i++)
  {
    sum += a[i];
  }
  return sum;
}
void out_put(int n,int a[n],int sum)
{
  for(int i=0; i<n; i++)
  {
   printf("sum is %d",sum);
  }
}  
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_n_arrays(n,a);
  out_put(n,a,sum);
  return 0;
}
