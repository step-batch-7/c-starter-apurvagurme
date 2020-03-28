#include<stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int cube(int);
int square(int);
int simple_interest(int, int, int);
double convert_fahrenheit_to_centigrade(float);
double convert_centigrade_to_fahrenheit(float);
float greatest_of_three(float, float, float);
float average_of_three(float, float, float);

unsigned char is_even(int number)
{
  return number % 2 == 0;
}

unsigned char is_odd(int number)
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

double convert_fahrenheit_to_centigrade(float fahrenheit)
{
  return (fahrenheit - 32) * 5 / 9;
}

double convert_centigrade_to_fahrenheit(float celsius)
{
  return (celsius * 9 / 5) + 32;
}

float greatest_of_three(float num1, float num2, float num3)
{
  float greatest = num1;
  if(num2 > num1)
  {
    greatest = num2;
  }
  if(num3 > num2)
  {
    greatest = num3;
  }
  return greatest;
}

float average_of_three(float num1, float num2, float num3)
{
  return (num1 + num2 + num3) / 3;
}

int main(void)
{
  int num, principle, rate, time;
  float num1, num2, num3, temp;
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

  printf("Enter a number for convert_fahrenheit_to_centigrade: ");
  scanf("%f",&temp);
  printf("centigrade temp of the fahrenheit temp is: %lf\n",convert_fahrenheit_to_centigrade(temp));

  printf("Enter a number for convert_centigrade_to_fahrenheit: ");
  scanf("%f",&temp);
  printf("fahrenheit temp of the centigrade temp is: %lf\n",convert_centigrade_to_fahrenheit(temp));

  printf("Enter three numbers for greatest of three: ");
  scanf("%f",&num1);
  scanf("%f",&num2);
  scanf("%f",&num3);
  printf("Greatest number is: %f\n",greatest_of_three(num1, num2, num3));

  printf("Enter three numbers for average: ");
  scanf("%f",&num1);
  scanf("%f",&num2);
  scanf("%f",&num3);
  printf("Average is: %f\n",average_of_three(num1, num2, num3));

  return 0;
}