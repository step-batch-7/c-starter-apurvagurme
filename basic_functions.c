#include<stdio.h>
#include<math.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);
int greatest_common_divisor(int, int);
int lcm(int, int);
double simple_interest(int, int, int);
double compound_interest(int, int, int);
double convert_fahrenheit_to_centigrade(float);
double convert_centigrade_to_fahrenheit(float);
int greatest_of_three(float, float, float);
double average_of_three(float, float, float);

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

int greatest_common_divisor(int number1, int number2)
{
  int gcd = number1 > number2 ? number2 + 1 : number1 + 1;
  while(gcd > 0)
  { 
    gcd = gcd - 1;
    if(number1 % gcd == 0 && number2 % gcd == 0)
    {
      return gcd;
    }
  }
  return 1;
}

int lcm(int number1, int number2)
{
  return number1 * number2 / greatest_common_divisor(number1, number2);
}

double simple_interest(int principle, int rate, int time)
{
  return (principle * rate * time) / 100;
}

double compound_interest(int principle, int rate, int time)
{
  return principle * pow((1 + rate / 100), time);
} 

double convert_fahrenheit_to_centigrade(float fahrenheit)
{
  return (fahrenheit - 32) * 5 / 9;
}

double convert_centigrade_to_fahrenheit(float celsius)
{
  return (celsius * 9 / 5) + 32;
}

int greatest_of_three(float num1, float num2, float num3)
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

double average_of_three(float num1, float num2, float num3)
{
  return (num1 + num2 + num3) / 3;
}

int main(void)
{
  int num, principle, rate, time, number1, number2;
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
  
  printf("Enter two numbers for greatest_common_divisor: ");
  scanf("%d",&number1);
  scanf("%d",&number2);
  printf("greatest_common_divisor of the numbers is: %d\n",greatest_common_divisor(number1, number2));

  printf("Enter two numbers for lcm: ");
  scanf("%d",&number1);
  scanf("%d",&number2);
  printf("lcm of the numbers is: %d\n",lcm(number1, number2));

  printf("To calculate simple interest\n");
  printf("Enter principle amount: ");
  scanf("%d",&principle);
  printf("Enter rate of interest: ");
  scanf("%d",&rate);
  printf("Enter time period: ");
  scanf("%d",&time);
  printf("Simple interest is: %lf\n",simple_interest(principle, rate, time));

  printf("To calculate compound interest\n");
  printf("Enter principle amount: ");
  scanf("%d",&principle);
  printf("Enter rate of interest: ");
  scanf("%d",&rate);
  printf("Enter time period: ");
  scanf("%d",&time);
  printf("Compound interest is: %lf\n",compound_interest(principle, rate, time));

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
  printf("Greatest number is: %d\n",greatest_of_three(num1, num2, num3));

  printf("Enter three numbers for average: ");
  scanf("%f",&num1);
  scanf("%f",&num2);
  scanf("%f",&num3);
  printf("Average is: %lf\n",average_of_three(num1, num2, num3));

  return 0;
}