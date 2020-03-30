#include <stdio.h>
#include <math.h>

int is_even(int);
int is_odd(int);;
int square(int);
int cube(int);
int gcd(int, int);
int lcm(int, int);
double simple_interest(double, double, double);
double compound_interest(double, double, double);
double fahrenheit_to_centigrade(double);
double centigrade_to_fahrenheit(double);
double greatest_of_two(double, double);
double greatest_of_three(double, double, double);
double average(double, double, double);

int is_even(int num)
{
  return num % 2 == 0;
}

int is_odd(int num)
{
  return !is_even(num);
}

int square(int num)
{
  return num * num;
}

int cube(int num)
{
  return num * square(num);
}

int gcd(int divident, int divisor)
{
  return divisor == 0 ? divident : gcd(divisor, divident % divisor);
}

int lcm(int num1, int num2)
{
  return (num1 * num2) / gcd(num1, num2);
}

double simple_interest(double principle, double rate, double period)
{
  return (principle * rate * period) / 100;
}

double compound_interest(double principle, double rate, double period)
{
  return principle * pow((1 + (rate / 100)), period) - principle;
}

double fahrenheit_to_centigrade(double fahrenheit){
  return (fahrenheit - 32) / 1.8;
}

double centigrade_to_fahrenheit(double centigrade){
  return (centigrade * 1.8) + 32;
}

double greatest_of_two(double num1, double num2)
{
  return num1 > num2 ? num1 : num2;
}

double greatest_of_three(double num1, double num2, double num3){
  double greatest = greatest_of_two(num1, num2);
  return greatest_of_two(greatest, num3);
}

double average(double num1, double num2, double num3){
  return (num1 + num2 + num3) / 3;
}

/////////////////////////////////////////////////

int main(void)
{
  int num1, num2, num3;
  double number1, number2, number3;
  double principle, rate, period, fahrenheit, centigrade;

  printf("Find whether a number even or not ...\n");
  printf("Enter a number\n");
  scanf("%d", &num1);
  printf("The number %d that you entered is %s\n", num1, is_even(num1) ? "even" : "not even");
  printf("The number %d that you entered is %s\n", num1, is_odd(num1) ? "odd" : "not odd");

  printf("\nCalculation of square and cube of a number ...\n");
  printf("Enter a number to calculate square and cube\n");
  scanf("%d", &num1);
  printf("The square of the given number %d is -> %d\n", num1, square(num1));
  printf("The cube of the given number %d is   -> %d\n", num1, cube(num1));

  printf("\nCalculation of GCD and LCM ...\n");
  printf("Enter first number\n");
  scanf("%d", &num1);
  printf("Enter second number\n");
  scanf("%d", &num2);
  printf("The greatest common divisor of %d and %d is -> %d\n", num1, num2, gcd(num1, num2));
  printf("The least common multiple of %d and %d is   -> %d\n", num1, num2, lcm(num1, num2));

  printf("\nCalculation of simple interest and compound interest ...\n");
  printf("Enter principle amound\n");
  scanf("%lf", &principle);
  printf("Enter rate of interest\n");
  scanf("%lf", &rate);
  printf("Enter period\n");
  scanf("%lf", &period);
  printf("Simple interest is   -> %f\n", simple_interest(principle, rate, period));
  printf("Compound interest is -> %f\n", compound_interest(principle, rate, period));

  printf("\nConversion of temperature from fahrenheit to centigrade ...\n");
  printf("Enter temperature in fahrenheit\n");
  scanf("%lf", &fahrenheit);
  printf("Equivalent temperature in centigrade of %f fahrenheit is -> %f\n", fahrenheit, fahrenheit_to_centigrade(fahrenheit));

  printf("\nConversion of temperature from centigrade to fahrenheit ...\n");
  printf("Enter temperature in centigrade\n");
  scanf("%lf", &centigrade);
  printf("Equivalent temperature in fahrenheit of %f centigrade is -> %f\n", centigrade, centigrade_to_fahrenheit(centigrade));

  printf("\nCalculation of greatest of three numbers ...\n");
  printf("Enter first number\n");
  scanf("%lf", &number1);
  printf("Enter second number\n");
  scanf("%lf", &number2);
  printf("Enter third number\n");
  scanf("%lf", &number3);
  printf("greatest of three numbers %f , %f and %f , is -> %f\n", number1, number2, number3, greatest_of_three(number1, number2, number3));

  printf("\nCalculation of average of three numbers ...\n");
  printf("Enter first number\n");
  scanf("%lf", &number1);
  printf("Enter second number\n");
  scanf("%lf", &number2);
  printf("Enter third number\n");
  scanf("%lf", &number3);
  printf("average of three numbers %f , %f and %f is -> %f\n", number1, number2, number3, average(number1, number2, number3));
}
