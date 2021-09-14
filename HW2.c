#include <stdio.h>
#include <string.h>
#include <float.h>

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
}

/* chapter 5 */
// Chapter 5, Exercise 1: time conversion

// Chapter 5, Exercise 2: int space

// Chapter 5, Exercise 3: height

// Chapter 5, Exercise 4: sum of the squares of int

// Chapter 5, Exercise 5: temperature

/* Chapter 6 */
// Chapter 6, Exercise 1: array

// Chapter 6, Exercise 2: pattern

// Chapter 6, Exercise 3: pattern 2

/* Chapter 7 */
// Chapter 7, Exercise 1: # character

// Chapter 7, Exercise 2: # character 2

// Chapter 7, Exercise 3: 0 input

// Chapter 7, Exercise 4: # character 3

// Chapter 7, Exercise 5: hours per week




int main(){
  /* Chapter 4 */
// Chapter 4, Exercise 1: first and last name
printf("Solution for chapter 4, exercise 1: \n");
//chap_4_ex_1();

// Chapter 4, Exercise 2: double quots
printf("\nSolution for chapter 4, exercise 2: \n");
//chap_4_ex_2();

// Chapter 4, Exercise 3: decimal and exponential
printf("\nSolution for chapter 4, exercise 3: \n");
//chap_4_ex_3();

// Chapter 4, Exercise 4: number of letters
printf("\nSolution for chapter 4, exercise 4: \n");
//chap_4_ex_4();

// Chapter 4, Exercise 5: double and float
printf("\nSolution for chapter 4, exercise 5: \n");
chap_4_ex_5();

/* chapter 5 */
// Chapter 5, Exercise 1: time conversion
printf("\nSolution for chapter 5, exercise 1: \n");

// Chapter 5, Exercise 2: int space
printf("\nSolution for chapter 5, exercise 2: \n");

// Chapter 5, Exercise 3: height
printf("\nSolution for chapter 5, exercise 3: \n");

// Chapter 5, Exercise 4: sum of the squares of int
printf("\nSolution for chapter 5, exercise 4: \n");

// Chapter 5, Exercise 5: temperature
printf("\nSolution for chapter 5, exercise 5: \n");

/* Chapter 6 */
// Chapter 6, Exercise 1: array
printf("\nSolution for chapter 6, exercise 1: \n");

// Chapter 6, Exercise 2: pattern
printf("\nSolution for chapter 6, exercise 2: \n");

// Chapter 6, Exercise 3: pattern 2
printf("\nSolution for chapter 6, exercise 3: \n");

/* Chapter 7 */
// Chapter 7, Exercise 1: # character
printf("\nSolution for chapter 7, exercise 1: \n");

// Chapter 7, Exercise 2: # character 2
printf("\nSolution for chapter 7, exercise 2: \n");

// Chapter 7, Exercise 3: 0 input
printf("\nSolution for chapter 7, exercise 3: \n");

// Chapter 7, Exercise 4: # character 3
printf("\nSolution for chapter 7, exercise 4: \n");

// Chapter 7, Exercise 5: hours per week
printf("\nSolution for chapter 7, exercise 5: \n");

}
