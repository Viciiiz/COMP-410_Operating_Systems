#include <stdio.h>
#include <math.h>

/*chapter 2 Exercise 1: first and last name*/
void chap_2_ex_1 (char *first, char *last)
{
  printf("%s %s\n", first, last);
  printf("%s\n%s\n", first, last);
  printf("%s ", first);
  printf("%s\n", last);
}

/*chapter 2 Exercise 2: convert age from years to days*/
int chap_2_ex_2 (int age)
{
  // assuming that a year has 365 days:
  return age * 365;
}

/*chapter 2 Exercise 3: double and square the variable toes = 10*/
void chap_2_ex_3 ()
{
  int toes = 10;
  int twice_toes = toes * 2;
  int toes_squared = (int) pow(toes,2);
  printf("Toes has a value of %d, which becomes %d when doubled, and %d when squared.\n", toes, twice_toes, toes_squared);
}
 
/*chapter 2 Exercise 4: one two three done!*/
void two()
{
  printf("two\n");
}

void one_three()
{
  printf("one\n");
  two();
  printf("three\n");
}

/* chapter 3 Exercise 1: ASCII value to char */
void chap_3_ex_1 ()
{
  printf("Enter an ASCII code value: ");
  int output;
  scanf("%d", &output);
  printf("The character having that ASCII code is: %c\n", output);
}

/* chapter 3 Exercise 2: Alert */
void chap_3_ex_2 ()
{
  printf("***Alert sound starts playing***\n");
  printf("By the Great Pumpkin, what was that!\n");
}

/* chapter 3 Exercise 3: age, years to seconds */
void chap_3_ex_3 ()
{
  long age_year, seconds_in_a_year = 3.156 * pow(10,7);
  printf("What's your age? : ");
  scanf("%ld", &age_year);
  long age_second = age_year * seconds_in_a_year;
  printf("You are approximately %ld seconds old.\n", age_second);
}

/* chapter 3 Exercise 4: inches to centimers */
void chap_3_ex_4 ()
{
  float height_inch, height_cm, inch_to_cm = 2.54;
  printf("Enter your height in inches: ");
  scanf("%f", &height_inch);
  height_cm = inch_to_cm * height_inch;
  printf("Your height in centimeters is: %.2f\n", height_cm);
}


int main(){
  // CHAPTER 2
  // chapter 2, Exercise 1
  printf("Solution to Chapter 2, Exercise 1: \n");
  chap_2_ex_1("Victor", "Rakotondranoro");

  // chapter 2, Exercice 2
  printf("\nSolution to Chapter 2, Exercise 2: \n");
  int age = 21;
  printf("You are %d years old which is the equivalent of %d days old.\n", age, chap_2_ex_2(age));

  // chapter 2, Exercise 3
  printf("\nSolution to Chapter 2, Exercise 3: \n");
  chap_2_ex_3();

  // chapter 2, Exercise 4
  printf("\nSolution to Chapter 2, Exercise 4: \n");
  printf("starting now: \n");
  one_three();
  printf("done!\n");

  // CHAPTER 3
  // chapter 3, Exercise 1
  printf("\nSolution to Chapter 3, Exercise 1: \n");
  chap_3_ex_1();

  // chapter 3, Exercise 2
  printf("\nSolution to Chapter 3, Exercise 2: \n");
  chap_3_ex_2();

  // chapter 3, Exercise 3
  printf("\nSolution to Chapter 3, Exercise 3: \n");
  chap_3_ex_3();

  // chapter 3, Exercise 4
  printf("\nSolution to Chapter 2, Exercise 4: \n");
  chap_3_ex_4();

}
