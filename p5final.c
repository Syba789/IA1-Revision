#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter the number to find the square\n");
  scanf("%f",&n);
  return n;
}
void output(float n,float sqrt_result)
{
  printf("%f is the square of %f",n,sqrt_result);
}
float mysqrt(float n)
{
  float guess=n/2;
  float next;
  next=n/guess;
  while(fabs(next - guess)> 0.00001)
  {
    guess=(guess + next)/2;
    next= n/guess;
  }
  return next;
}
int main()
{
  float n,sqrt;
  n=input();
  sqrt=mysqrt(n);
  output(n,sqrt);
  return 0;
}