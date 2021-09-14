#include <stdio.h>
#include <string.h>
#include <float.h>

#define MINUTES_60 60

/* Chapter 4 */
// Chapter 4, Exercise 1: first and last name
void chap_4_ex_1 () {
  int max = 50;
  char first[max];
  char last[max];
  printf("Enter your first name: ");
  scanf("%s", first);
  printf("Enter your last name: ");
  scanf("%s", last);
  printf("%s, %s\n", last, first);
}

// Chapter 4, Exercise 2: double quots
void chap_4_ex_2 () 
{
  int max = 20;
  char first[max];
  printf("Enter your first name: ");
  scanf("%s", first);
  //a
  printf("\"%s\"\n", first);
  //b
  printf("\"%20s\"\n", first);
  //c
   printf("\"%-20s\"\n", first);
  //d
  int len = strlen(first);
  printf("\"%*s\"\n", len + 3, first);
}

// Chapter 4, Exercise 3: decimal and exponential
void chap_4_ex_3 ()
{
  float num;
  printf("Enter a floating number: ");
  scanf("%f", &num);
  printf("The input is %.1f or %.1e\n", num, num);
  printf("The input is %+.3f or %.3e\n", num, num);
}

// Chapter 4, Exercise 4: number of letters
void chap_4_ex_4 ()
{
  int max = 50;
  char first[max];
  char last[max];
  printf("Enter your first name: ");
  scanf("%s", first);
  printf("Enter your last name: ");
  scanf("%s", last);
  int first_len = strlen(first), last_len = strlen(last);
  printf("%s %s\n", first, last);
  printf("%*d %*d\n", first_len, first_len, last_len, last_len);
  printf("%s %s\n", first, last);
  printf("%-*d %-*d\n", first_len, first_len, last_len, last_len);
}

// Chapter 4, Exercise 5: double and float
void chap_4_ex_5 ()
{
  float fl = 1.0/3.0;
  double dbl = 1.0/3.0;
  printf("4 digits float: %0.4f\n", fl);
  printf("4 digits double: %0.4f\n", fl);
  printf("12 digits: %0.12f\n", fl);
  printf("12 digits: %0.12f\n", dbl);
  printf("16 digits: %0.16f\n", fl);
  printf("16 digits: %0.16f\n", dbl);
  printf("%d, %d", FLT_DIG, DBL_DIG);
  // Are the displayed values of 1.0/3.0 consistent with these values? Yes, it appears to be the case on replit
}

/* chapter 5 */
// Chapter 5, Exercise 1: time conversion
void chap_5_ex_1 () 
{
  int  minutes;
  printf("Enter the amount of minutes to convert (0 to stop): ");
  scanf("%d", &minutes);
  while (minutes > 0)
  {
    printf("%d is %d hours and %d minutes.\n", minutes, minutes / MINUTES_60, minutes % MINUTES_60);
    printf("Enter the amount of minutes to convert: ");
    scanf("%d", &minutes);
  }
}

// Chapter 5, Exercise 2: int space
void chap_5_ex_2()
{
  int integer;
  printf("Enter an int: ");
  scanf("%d", &integer);
  for (int i = integer; i <= integer + 10; i++)
  {
    printf("%d ", i);
  }
  printf("\n");
}

// Chapter 5, Exercise 3: height
void chap_5_ex_3()
{
  float height_cm, cm_per_inch = 2.54, inch_per_feet = 12;
  printf("Enter your height in centimeters: ");
  scanf("%f", &height_cm);
  while (height_cm > 0)
  {
    float height_inch = height_cm / cm_per_inch;
    int feet_result = height_inch / inch_per_feet;
    float inch_result = height_inch - feet_result * inch_per_feet;
    printf("%0.1f cm = %d feet, %0.1f inches\n", height_cm, feet_result, inch_result);
    printf("Enter your height in centimeters (<=0 to quit): ");
    scanf("%f", &height_cm);
  }
}

// Chapter 5, Exercise 4: sum of the squares of int
void chap_5_ex_4 ()
{
  int total_sum = 0, to_sum, first = 1;
  printf("Enter the number of squares to sum: ");
  scanf("%d", &to_sum);
  for(int i = 0; i <= to_sum; i++)
  {
    total_sum += i*i;
  }
  printf("The sum of the square of the first %d integers is: %d\n", to_sum, total_sum);
}

// Chapter 5, Exercise 5: temperature
void Temperatures(double fahr)
{
  double Celsius = 5.0/9.0 * (fahr - 32.0);
  double Kelvin = Celsius + 273.1;
  printf("%.2f Fahrenheit is %.2f Celsius or %0.2f Kelvin\n", fahr, Celsius, Kelvin);
}

void chap_5_ex_5 ()
{
  double temp_fahr;
  printf("Enter a temperature in Fahrenheit: ");
  scanf("%lf", &temp_fahr);
  Temperatures(temp_fahr);
}



/* Chapter 6 */
// Chapter 6, Exercise 1: array
void chap_6_ex_1 ()
{
  int start = 97, alphabet_num = 26;
  char alphabet[alphabet_num];
  for(int i = 0; i < alphabet_num; i++)
  {
    alphabet[i]=start;
    start++;
  }
  for(int i = 0; i < alphabet_num; i++)
  {
    printf("%c ", alphabet[i]);
  }
  printf("\n");
}

// Chapter 6, Exercise 2: pattern
void chap_6_ex_2 ()
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("$");
    }
    printf("\n");
  }
}

// Chapter 6, Exercise 3: pattern 2
void chap_6_ex_3 ()
{
  int ascii_F = 70;
  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("%c", ascii_F);
      ascii_F--;
    }
    ascii_F = 70;
    printf("\n");
  }
}

/* Chapter 7 */
// Chapter 7, Exercise 1: # character
void chap_7_ex_1 () 
{
  int space_count = 0, newline_count = 0, other_count = 0;
  printf("Enter sequences of char (# to stop):\n");
  while(1)
  {
    char c = getchar();
    if (c == '#') break;
    else if (c == ' ') space_count++;
    else if (c == '\n') newline_count++;
    else other_count++;
  }
  printf("Number of space = %d\n", space_count);
  printf("Number of newline characters = %d\n", newline_count);
  printf("Number of other characters = %d\n", other_count);
}

// Chapter 7, Exercise 2: # character 2
void chap_7_ex_2 () 
{
  int count = 0;
  printf("Enter sequences of char (# to stop):\n");
  while(1)
  {
    
    char input = getchar();
    if (input == '#') break;
    else 
    {
      printf("%c = %d, ", input, input);
      count++;
    }
    if (count % 8 ==0 ) printf("\n");
  }
  printf("\n");
}

// Chapter 7, Exercise 3: 0 input
void chap_7_ex_3()
{
  int even_count = 0, odd_count = 0;
  float even_average = 0, odd_average = 0;
  printf("Enter an integer (0 to stop): ");
  while(1)
  {
    int input = 0;
    scanf("%d", &input);
    if (input == 0) break;
    else if (input % 2 == 0)
    {
      even_count++;
      even_average+=input;
    } 
    else if (input % 2 == 1) 
    {
      odd_count++;
      odd_average+=input;
    }
  }
  even_average /= even_count;
  odd_average /= odd_count;
  printf("Number of even integers = %d\n", even_count);
  printf("Average of even numbers = %.2f\n", even_average);
  printf("Number of odd integers = %d\n", odd_count);
  printf("Average of odd numbers = %.2f\n", odd_average);
}

// Chapter 7, Exercise 4: # character 3
void chap_7_ex_4()
{
  int count = 0;
  printf("Enter sequences of char (# to stop):\n");
  while(1)
  {
    char input = getchar();
    if (input == '#') break;
    else if (input == '.')
    {
      printf("!");
      count++;
    } else if (input == '!')
    {
      printf("!!");
      count++;
    }
  }
  printf("Number of substitutions made: %d\n", count);
}

// Chapter 7, Exercise 5: hours per week
float tax_calculation (float gross_pay)
{
  float tax_rate_less_300 = 0.15, tax_rate_next_150 = 0.20, tax_rate_rest = 0.25, remaining_amount_to_tax = 0, current_tax;
  if (gross_pay <= 300) return 300 * tax_rate_less_300;
  else if (gross_pay <= 450)
  {
    current_tax = 300 * tax_rate_less_300;
    remaining_amount_to_tax = gross_pay - 300;
    current_tax += remaining_amount_to_tax * tax_rate_next_150;
  } else {
    current_tax = 300 * tax_rate_less_300 + 150 * tax_rate_next_150;
    remaining_amount_to_tax = gross_pay - 300 - 150;
    current_tax += remaining_amount_to_tax * tax_rate_rest;
  }
  return current_tax;
}

float gross_pay_calculation (int hours)
{
  float overtime_rate = 1.5, pay_rate = 10.0;
  if (hours <= 40) return pay_rate * hours;
  else {
    float overtime_hours = hours - 40;
    float gross_pay = pay_rate * 40 + overtime_hours * pay_rate * overtime_rate;
    return gross_pay;
  } 
}

void chap_7_ex_5()
{
  int hours;
  printf("How many hours a week did you work?: ");
  scanf("%d", &hours);

  float gross_pay = gross_pay_calculation(hours);
  float taxes = tax_calculation(gross_pay);
  float net_pay = gross_pay - taxes;

  printf("The gross pay is: %.2f\n", gross_pay);
  printf("The taxes are: %.2f\n", taxes);
  printf("The net pay is: %.2f\n", net_pay);
}



int main(){
  /* Chapter 4 */
// Chapter 4, Exercise 1: first and last name
printf("Solution for chapter 4, exercise 1: \n");
chap_4_ex_1();

// Chapter 4, Exercise 2: double quots
printf("\nSolution for chapter 4, exercise 2: \n");
chap_4_ex_2();

// Chapter 4, Exercise 3: decimal and exponential
printf("\nSolution for chapter 4, exercise 3: \n");
chap_4_ex_3();

// Chapter 4, Exercise 4: number of letters
printf("\nSolution for chapter 4, exercise 4: \n");
chap_4_ex_4();

// Chapter 4, Exercise 5: double and float
printf("\nSolution for chapter 4, exercise 5: \n");
chap_4_ex_5();

/* chapter 5 */
// Chapter 5, Exercise 1: time conversion
printf("\nSolution for chapter 5, exercise 1: \n");
chap_5_ex_1();

// Chapter 5, Exercise 2: int space
printf("\nSolution for chapter 5, exercise 2: \n");
chap_5_ex_2();

// Chapter 5, Exercise 3: height
printf("\nSolution for chapter 5, exercise 3: \n");
chap_5_ex_3();

// Chapter 5, Exercise 4: sum of the squares of int
printf("\nSolution for chapter 5, exercise 4: \n");
chap_5_ex_4();

// Chapter 5, Exercise 5: temperature
printf("\nSolution for chapter 5, exercise 5: \n");
chap_5_ex_5();

/* Chapter 6 */
// Chapter 6, Exercise 1: array
printf("\nSolution for chapter 6, exercise 1: \n");
chap_6_ex_1();

// Chapter 6, Exercise 2: pattern
printf("\nSolution for chapter 6, exercise 2: \n");
chap_6_ex_2();

// Chapter 6, Exercise 3: pattern 2
printf("\nSolution for chapter 6, exercise 3: \n");
chap_6_ex_3();

/* Chapter 7 */
// Chapter 7, Exercise 1: # character
printf("\nSolution for chapter 7, exercise 1: \n");
chap_7_ex_1();

// Chapter 7, Exercise 2: # character 2
printf("\nSolution for chapter 7, exercise 2: \n");
chap_7_ex_2();

// Chapter 7, Exercise 3: 0 input
printf("\nSolution for chapter 7, exercise 3: \n");
chap_7_ex_3();

// Chapter 7, Exercise 4: # character 3
printf("\nSolution for chapter 7, exercise 4: \n");
chap_7_ex_4();

// Chapter 7, Exercise 5: hours per week    
printf("\nSolution for chapter 7, exercise 5: \n");
chap_7_ex_5();

} 
