#include<stdio.h>

int currency_breakdown(int, int);

int currency_breakdown(int denomination, int amount)
{
  int count = amount / denomination; 
  printf("%d x Rs %d\n", count, denomination);
  amount = amount - denomination * count;
  return amount;
} 

int main(void)
{
  int amount;
  printf("Enter the total amount: ");
  scanf("%d", &amount);

  amount = currency_breakdown(2000, amount);
  amount = currency_breakdown(500, amount);
  amount = currency_breakdown(200, amount);
  amount = currency_breakdown(100, amount);
  amount = currency_breakdown(50, amount);
  amount = currency_breakdown(10, amount);
  amount = currency_breakdown(5, amount);
  amount = currency_breakdown(1, amount);

  return 0;
}