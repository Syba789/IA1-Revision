#include<stdio.h>
typedef struct _complex
{
  float real;
  float imaginary;
}complex;

complex input()
{
  complex k;
  printf("enter the real part\n");
  scanf("%f",&k.real);
  printf("enter the imaginary part\n");
  scanf("%f",&k.imaginary);
  return k;
}
complex add(complex a,complex b)
{
  complex z;
  z.real=a.real + b.real;
  z.imaginary= a.imaginary + b.imaginary;
  return z;
}
void output(complex a,complex b,complex result)
{
  printf("%f+%fi + %f+%fi = %f+%fi",a.real,a.imaginary,b.real,b.imaginary,result.real,result.imaginary);
}
int main()
{
  complex a,b,result;
  a=input();
  b=input();
  result=add(a,b);
  output(a,b,result);
  return 0;
}