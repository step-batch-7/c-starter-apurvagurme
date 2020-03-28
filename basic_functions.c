#include<stdio.h>

int is_even(int);
int is_odd(int);
int cube(int);
int simple_interest(int, int, int);
int greatest_of_three(int, int, int);
int average_of_three(int, int, int);

int is_even(int number)
{
  return number % 2 == 0;
}

int is_odd(int number)
{
  return is_even(number) ? 0 : 1;
}

int square(int number)
{
  return number * number;
}

int cube(int number)
{ 
  return square(number) * number;
}

int simple_interest(int principle, int rate, int time)
{
  return (principle * rate * time) / 100;
}

int greatest_of_three(int num1, int num2, int num3)
{
  if(num1 > num2 && num1 > num3)
  {
    return num1;
  }
  if(num2 > num1 && num2 > num3)
  {
    return num2;
  }
  return num3;
}

int average_of_three(int num1, int num2, int num3)
{
  return (num1 + num2 + num3) / 3;
}

int main(void)
{
  int num, num1,num2, num3, principle, rate, time;

  printf("Enter a number for isEven: ");
  scanf("%d",&num);
  is_even(num) ? printf("%d is an even number\n",num) : printf("%d is not an even number\n",num);

  printf("Enter a number for isOdd: ");
  scanf("%d",&num);
  is_odd(num) ? printf("%d is an odd number\n",num) : printf("%d is not an odd number\n",num);

  printf("Enter a number for square: ");
  scanf("%d",&num);
  printf("Square of the number is: %d\n",square(num));

  printf("Enter a number for cube: ");
  scanf("%d",&num);
  printf("Cube of the number is: %d\n",cube(num));

  printf("To calculate simple interest\n");
  printf("Enter principle amount: ");
  scanf("%d",&principle);
  printf("Enter rate of interest: ");
  scanf("%d",&rate);
  printf("Enter time period: ");
  scanf("%d",&time);
  printf("Simple interest is: %d\n",simple_interest(principle, rate, time));

  printf("Enter three numbers for greatest of three: ");
  scanf("%d",&num1);
  scanf("%d",&num2);
  scanf("%d",&num3);
  printf("Greatest number is: %d\n",greatest_of_three(num1, num2, num3));

  printf("Enter three numbers for average: ");
  scanf("%d",&num1);
  scanf("%d",&num2);
  scanf("%d",&num3);
  printf("Average is: %d\n",average_of_three(num1, num2, num3));

  return 0;
}