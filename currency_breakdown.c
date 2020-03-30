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

  remaining_amt = currency_breakdown(2000, amount);
  remaining_amt = currency_breakdown(500, remaining_amt);
  remaining_amt = currency_breakdown(200, remaining_amt);
  remaining_amt = currency_breakdown(100, remaining_amt);
  remaining_amt = currency_breakdown(50, remaining_amt);
  remaining_amt = currency_breakdown(10, remaining_amt);
  remaining_amt = currency_breakdown(5, remaining_amt);
  remaining_amt = currency_breakdown(1, remaining_amt);

  return 0;
}