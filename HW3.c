#include<stdio.h>
#include<ctype.h>

/* Chapter 8 */
// Chapter 8, Exercise 1: count number of characters in file until EOF
void chap_8_ex_1()
{
  printf("Input: \n");
  int count = 0;
  char c;
  while ((c = getchar()) != EOF){
    // this program counts the newline characters as well
    count++; 
  } 

  printf("\nThere are %d characters in the input.\n", count);
}

// Chapter 8, Exercise 2: return ascii of each char until EOF
void chap_8_ex_2()
{
  printf("input: \n");
  int char_count = 0;
  char c;
	while ((c = getchar()) != EOF)
	{
		if (c >= ' ') printf("\'%c\': %d", c, c);
    else if (c == '\t') printf("\'\\t\': %d", c);
		else if (c == '\n') printf("\'\\n\': %d", c);
		else printf("\'^%c\': %d", c + 64, c );

		char_count++;
		if (char_count % 10 == 0) printf("\n"); 
		else printf("  "); 
	}
	printf("\n");

}

// Chapter 8, Exercise 3: count lower and upper case chars until EOF
void chap_8_ex_3()
{
  printf("input: \n");
  char c;
	int upper = 0, lower = 0;
	while ((c = getchar()) != EOF)
	{
		if (isupper(c)) upper++;
		else if (islower(c)) lower++;
	} 
  printf("Lowercase count: %d\n", lower);
	printf("Uppercase count: %d\n", upper);
}

// Chapter 8, Exercise 4: average char num per word
void chap_8_ex_4()
{
  printf("input: \n");
  char c;
	int word_boolean = 0; // 1 if we are currently evaluation a word, 0 if not a word
	int letter_count = 0, word_count = 0;
	while ((c = getchar()) != EOF)
	{
		if (isalpha(c)) 
		{
			letter_count++;
			if (word_boolean == 0) 
			{
				word_boolean = 1;
				word_count++;
			}
		}
		else word_boolean = 0;
	}
	printf("\nThere are around %.3f letters per word.\n", (float) letter_count / word_count);

}

// Chapter 8, Exercise 5: guess number
void chap_8_ex_5()
{
  int top = 100, bottom = 0, guess = 50;
	char c;
	printf("Pick a number from 1 to 100.\n");
	printf("is your number %d? (type y if yes, h if higher, l if lower)\n", guess);

	while ((c = getchar()) != 'y')
	{
		if (c == 'h') bottom = guess;
		else if (c == 'l') top = guess;
		else if (c == '\n') continue;
    else
		{
			printf("Invalid valid input. Type y if yes, h is higher, l if lower.\n");
			continue;
		}
		guess = (top + bottom) / 2.0;
		printf("is your number %d? (type y if yes, h is higher, l if lower)\n", guess);	
}

	printf("Yay!\n");	

}

// Chapter 8, Exercise 6: first non-white space char
void chap_8_ex_6()
{
  printf("Input: ");
  char c = getchar();
	while (isspace(c)) c = getchar();
  printf("The first non-space character is: '%c'\n", c);
	while (getchar() != '\n') continue;
}

// Chapter 8, Exercise 7: calculate gross pay, taxes, and net pay
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

float gross_pay_calculation (int hours, float pay_rate)
{
  float overtime_rate = 1.5;
  
  
  if (hours <= 40) return pay_rate * hours;
  else {
    float overtime_hours = hours - 40;
    float gross_pay = pay_rate * 40 + overtime_hours * pay_rate * overtime_rate;
    return gross_pay;
    } 
}

void chap_8_ex_7()
{
  char choice;
  float pay_rate;
  printf("*****************************************************************\n");
  printf("Enter the letter corresponding to the desired pay rate or action:\n");
  printf("a) $8.75/hr                        b) $9.33/hr\n");
  printf("c) $10.00/hr                       d) $11.20/hr\n");
  printf("e) quit\n");
  scanf("%c", &choice);
  switch(choice)
  {
    case 'a': { pay_rate = 8.75; break;}
    case 'b': { pay_rate = 9.33; break;}
    case 'c': { pay_rate = 10.00; break;}
    case 'd': { pay_rate = 11.20; break;}
    case 'e': {printf("exiting…\n"); return; break;}
    default: {printf ("invalid input.\n"); return;}
  }
  int hours;
  printf("How many hours a week did you work?: ");
  scanf("%d", &hours);

  float gross_pay = gross_pay_calculation(hours, pay_rate);
  float taxes = tax_calculation(gross_pay);
  float net_pay = gross_pay - taxes;

  printf("The gross pay is: %.2f\n", gross_pay);
  printf("The taxes are: %.2f\n", taxes);
  printf("The net pay is: %.2f\n\n\n", net_pay);
}


/* Chapter 9 */
// Chapter 9, Exercise 1: minimum between 2 doubles
double min(double a, double b)
{
  if (a < b) return a;
  else return b;
}

void chap_9_ex_1 ()
{
  double a, b;
  printf("Enter a double: ");
  scanf("%lf", &a);
  printf("\nEnter another double: ");
  scanf("%lf", &b);
  if (a == b) printf("The two doubles are equal.\n");
  else printf("The minimum between the 2 values is: %lf", min(a,b));
}

// Chapter 9, Exercise 2: print char in column
void chline(char ch, int i,int j)
{
  int column;
  for (column = 0; column < i; column++) printf(" ");
  for (column = i; column < j; column++) printf("%c", ch);
  printf("\n");
}

void chap_9_ex_2()
{
  while(getchar() == '\n') break;
  char ch;
  int i, j;
  printf("Enter a char: ");
  scanf("%c", &ch);
  printf("Enter a positive integer: ");
  scanf("%d", &i);
  printf("Enter a positive integer greater than the previous one: ");
  scanf("%d", &j);
  chline(ch,i,j);
}

// Chapter 9, Exercise 3: print char X times per line, on Y lines
void print_char (char ch, int num, int line_num)
{
  for(int i = 0; i < line_num; i++)
  {
    for(int j = 0; j < num; j++)
    {
      printf("%c", ch);
    }
    printf("\n");
  }
}

void chap_9_ex_3()
{
  while(getchar() == '\n') break;
  char ch;
  int num, line_num;
  printf("Enter a char: \n");
  scanf("%c", &ch);
  printf("Enter the number of times you want to print it per line: \n");
  scanf("%d", &num);
  printf("Enter the number of lines that will print it: \n");
  scanf("%d", &line_num);
  print_char(ch, num, line_num);
}

// Chapter 9, Exercise 4: harmonic mean
void chap_9_ex_4 ()
{
  double i, j;
  printf("Enter a double: ");
  scanf("%lf", &i);
  printf("Enter another double: ");
  scanf("%lf", &j);
  double harmonic_mean = 1 / i + 1 / j; // inverses of 2 numbers
  harmonic_mean /= 2; // averaging them
  harmonic_mean = 1/harmonic_mean; // inverse of the result
  printf("The harmonic mean is: %lf\n", harmonic_mean);
}

// Chapter 9, Exercise 5: give 2 doubles the same value
double larger_of(double x, double y)
{
  if (x > y) return x;
  else return y;
}

void chap_9_ex_5()
{
  while(getchar()=='\n') break;
  double i, j;
  printf("Enter a double: ");
  scanf("%lf", &i);
  printf("Enter another double: ");
  scanf("%lf", &j);
  i = larger_of(i, j);
  j = larger_of(i, j);
  printf("Now, both doubles are equal to %lf\n", i);
}

// Chapter 9, Exercise 6: char position
int char_position(char ch)
{
  if(isalpha(ch)){
    if(isupper(ch)) return ch - 64;
    else if (islower(ch)) return ch - 96;
  } 
  return -1;
}

void chap_9_ex_6()
{
  char c;
  printf("Enter a char: \n");
  while((c = getchar()) != EOF)
  {
    if(c == '\n') continue;
    if (isalpha(c)) printf("The input %c is a letter at position %d.\n", c, char_position(c));
    else printf("The input %c is not a letter.\n", c);
  } 
}

// Chapter 9, Exercise 7: raise double to power
double power(double num, int pow)
{
  if (num == 0) return 0;
  if (pow == 0) return 1;
  double result = 1;
  int positive_pow = pow > 0 ? pow : pow * -1;
  for(int i = 0; i < positive_pow; i++)
      result *= num;
  if(pow > 0) return result;
  else return 1.0 / result; 
}

void chap_9_ex_7()
{
  printf("Enter a double: ");
  double num;
  scanf("%lf", &num);
  printf("Raise this double to the power (int): ");
  int pow;
  scanf("%d", &pow);
  printf("%lf to the power %d is %lf.\n", num, pow, power(num, pow));
}

// Chapter 9, Exercise 8: raise double to power, recursively
double power_recursive(double num, int pow)
{
  if (num == 0) return 0;
  if (pow == 0) return 1;
  double result;
  int positive_pow = pow > 0 ? pow : pow * - 1;
  result = num * power_recursive(num, positive_pow - 1);
  if(pow > 0) return result;
  else return 1.0 / result; 
}

void chap_9_ex_8()
{
  printf("Enter a double: ");
  double num;
  scanf("%lf", &num);
  printf("Raise this double to the power (int): ");
  int pow;
  scanf("%d", &pow);
  printf("%lf to the power %d is %lf.\n", num, pow, power_recursive(num, pow));
}


int main(){
   /* Chapter 8 */
// Chapter 8, Exercise 1: 
printf("Solution to Chapter 8, Exercise 1: \n");
chap_8_ex_1();

// Chapter 8, Exercise 2: 
printf("\nSolution to Chapter 8, Exercise 2: \n");
chap_8_ex_2();

// Chapter 8, Exercise 3: 
printf("\nSolution to Chapter 8, Exercise 3: \n");
chap_8_ex_3();

// Chapter 8, Exercise 4: 
printf("\nSolution to Chapter 8, Exercise 4: \n");
chap_8_ex_4();

// Chapter 8, Exercise 5: 
printf("\nSolution to Chapter 8, Exercise 5: \n");
chap_8_ex_5();

// Chapter 8, Exercise 6: 
printf("\nSolution to Chapter 8, Exercise 6: \n");
chap_8_ex_6();

// Chapter 8, Exercise 7: 
printf("\nSolution to Chapter 8, Exercise 7: \n");
chap_8_ex_7();

/* Chapter 9 */
// Chapter 9, Exercise 1: 
printf("\nSolution to Chapter 9, Exercise 1: \n");
chap_9_ex_1();

// Chapter 9, Exercise 2: 
printf("\nSolution to Chapter 9, Exercise 2: \n");
chap_9_ex_2();

// Chapter 9, Exercise 3: 
printf("\nSolution to Chapter 9, Exercise 3: \n");
chap_9_ex_3();

// Chapter 9, Exercise 4: 
printf("\nSolution to Chapter 9, Exercise 4: \n");
chap_9_ex_4();

// Chapter 9, Exercise 5: 
printf("\nSolution to Chapter 9, Exercise 5: \n");
chap_9_ex_5();

// Chapter 9, Exercise 6: 
printf("\nSolution to Chapter 9, Exercise 6: \n");
chap_9_ex_6();

// Chapter 9, Exercise 7: 
printf("\nSolution to Chapter 9, Exercise 7: \n");
chap_9_ex_7();

// Chapter 9, Exercise 8: 
printf("\nSolution to Chapter 9, Exercise 8: \n");
chap_9_ex_8();
} 
