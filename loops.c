#include <stdio.h>

int factorial(int);
long long int fibonacci(int);
int print_odd_nums_one_to_N(int);
int print_even_nums_one_to_N(int);
int multiplication_table(int, int);
int sum_of_n_numbers(int, int);
long long int product_of_n_numbers(int, int);
int print_odd_nums_in_range(int, int);
int print_nth_nums(int, int, int);
int sum_of_even_nums_in_range(int, int);
long long int print_backward(int);
int print_denominations(int);

int factorial(int num)
{
  return num == 0 ? 1 : factorial(num - 1) * num;
}

long long int fibonacci(int limit)
{
  printf("\nFibonacci series is ...\n");
  int numberOfTerms = limit, currentNumber = 1, nextNumber = 0;
  long long int sum = 0;
  if (numberOfTerms > 0){
    while (numberOfTerms > 0){
      printf("%lld\n", sum);
      sum = currentNumber + nextNumber;
      currentNumber = nextNumber;
      nextNumber = sum;
      numberOfTerms--;
    }
  }
  return 0;
}

int print_odd_nums_one_to_N(int limit)
{
  printf("\n");
  for (int count = 0; count <= limit; count++){
    if(count % 2){
      printf("%d\n", count);
    }
  }
  return 0;
}

int print_even_nums_one_to_N(int limit)
{
  printf("\n");
  for (int count = 0; count <= limit; count++){
    if(!(count % 2)){
      printf("%d\n", count);
    }
  }
  return 0;
}

int multiplication_table(int number, int limit)
{
  printf("\n");
  for (int count = 0; count <= limit; count++){
    printf("%d x %d = %d\n",number, count, number * count);
  }
  return 0;
}

int sum_of_n_numbers(int start, int end)
{
  int sum = 0;
  for (int count = 0; count <= end; count++){
    sum += count;
  }
  return sum;
}

long long int product_of_n_numbers(int start, int end)
{
  int product = 1;
  for (int count = 1; count <= end; count++){
    product *= count;
  }
  return product;
}

int print_odd_nums_in_range(int start, int end)
{
  printf("\n");
  for (int count = start; count <= end; count++){
    if(count % 2){
      printf("%d\n", count);
    }
  }
  return 0;
}

int print_nth_nums(int start, int end, int nth)
{
  printf("\n");
  for (int count = start; count <= end; count++){
    if(!(count % nth)){
      printf("%d\n", count);
    }
  }
  return 0;
}

int sum_of_even_nums_in_range(int start, int end)
{
  int sum;
  for (int count = start; count <= end; count++){
    if(!(count % 2)){
      sum += count;
    }
  }
  return sum;
}

long long int print_backward(int num)
{
  printf("\n");
  for (int count = num; count > 0; count--){
    if(count % 2){
      printf("%d\n", count);
    }
  }
  return 0;
}

int print_denominations(int amound)
{
  int capital = amound;

  printf("%d x Rs 2000\n", capital / 2000);
  capital %= 2000;

  printf("%d x Rs 500\n", capital / 500);
  capital %= 500;

  printf("%d x Rs 200\n", capital / 200);
  capital %= 200;

  printf("%d x Rs 100\n", capital / 100);
  capital %= 100;

  printf("%d x Rs 50\n", capital / 50);
  capital %= 50;

  printf("%d x Rs 10\n", capital / 10);
  capital %= 10;

  printf("%d x Rs 5\n", capital / 5);
  capital %= 5;

  printf("%d x Rs 1\n", capital / 1);

  return 0;
}

/////////////////////////////////////////////////

int main(void)
{
  int num, limit, nth;

  printf("I. Enter a number to find the factorial\n");
  scanf("%d", &num);
  printf("Factorial of %d is %d\n", num, factorial(num));

  printf("\nII. Enter a number for printing fibonacci\n");
  scanf("%d", &num);
  fibonacci(num);

  printf("\nIII. Printing odd numbers between 1 to N\n");
  printf("Enter a number\n");
  scanf("%d", &num);
  print_odd_nums_one_to_N(num);

  printf("\nIV. Printing even numbers between 1 to N\n");
  printf("Enter a number\n");
  scanf("%d", &num);
  print_even_nums_one_to_N(num);

  printf("\nV. Multipliction table\n");
  printf("Enter a number to multiply\n");
  scanf("%d", &num);
  printf("Enter a limit\n");
  scanf("%d", &limit);
  multiplication_table(num, limit);

  printf("\nVI. Printing sum of n numbers in range\n");
  printf("Enter starting number\n");
  scanf("%d", &num);
  printf("Enter end number\n");
  scanf("%d", &limit);
  printf("Sum of N numbers from %d to %d is -> %d\n", num, limit, sum_of_n_numbers(num, limit));

  printf("\nVII. Printing product of n numbers in range\n");
  printf("Enter starting number\n");
  scanf("%d", &num);
  printf("Enter end number\n");
  scanf("%d", &limit);
  printf("Product of N numbers from %d to %d is -> %lld\n", num, limit, product_of_n_numbers(num, limit));

  printf("\nVIII. Printing odd numbers in range\n");
  printf("Enter starting number\n");
  scanf("%d", &num);
  printf("Enter end number\n");
  scanf("%d", &limit);
  print_odd_nums_in_range(num, limit);

  printf("\nIX. Printing nth terms in range\n");
  printf("Enter starting number\n");
  scanf("%d", &num);
  printf("Enter end number\n");
  scanf("%d", &limit);
  printf("Enter nth number\n");
  scanf("%d", &nth);
  print_nth_nums(num, limit, nth);

  printf("\nX. Printing sum of even numbers in range\n");
  printf("Enter starting number\n");
  scanf("%d", &num);
  printf("Enter end number\n");
  scanf("%d", &limit);
  printf("sum of even nums between %d and %d is %d\n", num, limit, sum_of_even_nums_in_range(num, limit));

  printf("\nXI. Printing odd numbers in reverse order from N\n");
  printf("Enter starting number\n");
  scanf("%d", &num);
  print_backward(num);

  printf("\nXII. Currency breakdown\n");
  printf("Enter an amound\n");
  scanf("%d", &num);
  print_denominations(num);
}
