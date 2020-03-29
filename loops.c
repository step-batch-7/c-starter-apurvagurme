#include<stdio.h>

int factorial(int);
int fibonacci(int);

int factorial(int number)
{
  int facto = 1;
  for(int index = number; index > 0; index--)
  {
    facto = facto * index; 
  }
  return facto;
}

int fibonacci(int num)
{
    int first_num = 0;
    int second_num = 1;
    int fibo;
    printf("0\n");
    if(num > 0) 
    {
    printf("1\n");
        for(int index = 1; index <= num;)
        {
            fibo = first_num + second_num;
            first_num = second_num;
            second_num = fibo;
            index = fibo;
            if(fibo <= num){
            printf("%d\n", fibo);
            }
        }
    }
    return 0;
}

int main(void)
{
  int number;

  printf("Enter a number for factorial: ");
  scanf("%d",&number);
  printf("Factorial of a number is: %d", factorial(number));

  printf("Enter a number for fibonacci: ");
  scanf("%d",&number);
  fibonacci(number);

  return 0; 
}