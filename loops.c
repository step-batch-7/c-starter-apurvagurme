#include<stdio.h>

int factorial(int);
int fibonacci(int);
int odd_numbers_from_1(int);
int even_numbers(int);
int multiplication_table(int, int);
int sum_of_n_numbers(int, int);
int product_of_n_numbers(int, int);
int odd_numbers_from_n(int, int);
int every_nth_number(int, int, int);
int sum_of_even_numbers(int, int);
int odd_numbers_in_reverse(int);

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

int odd_numbers_from_1(int edge)
{ 
  for(int index = 1; index <= edge; index++)
  {
    if(index % 2 != 0)
    {
    printf("%d\n", index);
    }
  }
  return 0;
}

int even_numbers(int edge)
{ 
  for(int index = 1; index <= edge; index++)
  {
    if(index % 2 == 0)
    {
    printf("%d\n", index);
    }
  }
  return 0;
}

int multiplication_table(multiplier, upto)
{
  for(int index = 1; index <= upto; index++)
  {
    int multiplication = multiplier * index;
    printf("%d * %d = %d\n", multiplier, index, multiplication);
  }
  return 0;
}

int sum_of_n_numbers(from, to)
{
  int sum = 0;
  for(int index = from; index <= to; index++)
  {
    sum = sum + index;
  }
  return sum;
}

int product_of_n_numbers(from, to)
{
  int product = 1;
  for(int index = from; index <= to; index++)
  {
    product = product * index;
  }
  return product;
}

int odd_numbers_from_n(from, to)
{
  for(int index = from; index <= to; index++)
  {
    if(index % 2 != 0)
    {
      printf("%d\n", index);
    }
  }
  return 0;
}

int every_nth_number(difference, from, to)
{
  int nth_number = from;
  printf("%d\n", nth_number);
  for(int index = from; index <= to; index++)
  {
    nth_number = nth_number + difference;
    if(nth_number <=to)
    {
      printf("%d\n", nth_number);
    }
  }
  return 0;
}

int sum_of_even_numbers(from, to)
{
  int sum;
  for(int index = from; index <= to; index++)
  {
    if(index % 2 == 0)
    {
      sum = sum + index;
    }
  }
  return sum;
}

int odd_numbers_in_reverse(int nth_number)
{
  for(int index = nth_number; index > 0; index--)
  {
    if(index % 2 != 0)
    {
      printf("%d\n", index);
    }
  }
  return 0;
}

int main(void)
{
  int number, number1, number2, difference;

  printf("Enter a number for factorial: ");
  scanf("%d",&number);
  printf("Factorial of a number is: %d\n", factorial(number));

  printf("Enter a number for fibonacci: ");
  scanf("%d",&number);
  fibonacci(number);

  printf("Enter a number for odd_numbers_from_1: ");
  scanf("%d",&number);
  odd_numbers_from_1(number);

  printf("Enter a number for even_numbers: ");
  scanf("%d",&number);
  even_numbers(number);

  printf("Enter multiplier: ");
  scanf("%d",&number1);
  printf("Enter boundary: ");
  scanf("%d",&number2);
  multiplication_table(number1, number2);

  printf("Enter starting number: ");
  scanf("%d",&number1);
  printf("Enter nth number: ");
  scanf("%d",&number2);
  printf("Sum of the numbers is: %d\n",sum_of_n_numbers(number1, number2));

  printf("Enter starting number: ");
  scanf("%d",&number1);
  printf("Enter nth number: ");
  scanf("%d",&number2);
  printf("Product of the numbers is: %d\n",product_of_n_numbers(number1, number2));

  printf("Enter starting number: ");
  scanf("%d",&number1);
  printf("Enter nth number: ");
  scanf("%d",&number2);
  odd_numbers_from_n(number1, number2);

  printf("Enter nth difference: ");
  scanf("%d",&difference);
  printf("Enter starting number: ");
  scanf("%d",&number1);
  printf("Enter nth number: ");
  scanf("%d",&number2);
  every_nth_number(difference, number1, number2);
  
  printf("Enter starting number: ");
  scanf("%d",&number1);
  printf("Enter nth number: ");
  scanf("%d",&number2);
  printf("Sum of the even numbers is: %d\n",sum_of_even_numbers(number1, number2));
  
  printf("Enter nth number: ");
  scanf("%d",&number);
  odd_numbers_in_reverse(number);
  
  return 0; 
}