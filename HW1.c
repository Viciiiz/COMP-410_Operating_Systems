#include <stdio.h>
#include <math.h>

/* chapter 2 Exercise 1: first and last name */
void chap_2_ex_1 (char *first, char *last)
{
  printf("%s %s\n", first, last);
  printf("%s\n%s\n", first, last);
  printf("%s ", first);
  printf("%s\n", last);
}

/* chapter 2 Exercise 2: name and address */
void chap_2_ex_2 ()
{
  char name [] = "Victor";
  char address [] = "Chicago";
  printf("%s lives in %s.\n", name, address);
}

/* chapter 2 Exercise 3: convert age from years to days */
int chap_2_ex_3 (int age)
{
  // assuming that a year has 365 days:
  return age * 365;
}

/* chapter 2 Exercise 4: jolly good */
void print_jolly_once ()
{
  printf("For he's a jolly good fellow!\n");
}

void print_final_line_once ()
{
  printf("Which nobody can deny!\n");
}

void jolly_good ()
{
  for(int i = 0; i < 3; i++)
    print_jolly_once();
  print_final_line_once();
}

/* chapter 2 Exercise 5: double and square the variable toes = 10 */
void chap_2_ex_5 ()
{
  int toes = 10;
  int twice_toes = toes * 2;
  int toes_squared = (int) pow(toes,2);
  printf("Toes has a value of %d, which becomes %d when doubled, and %d when squared.\n", toes, twice_toes, toes_squared);
}

/* chapter 2 Exercise 6: smile */
void print_smile_once ()
{
  printf("Smile!");
}

void print_smile_all ()
{
  int count = 3;
  while (count != 0) {
    for(int i = 0; i < count; i++)
    {
      print_smile_once();
    }
    printf("\n");
    count--;
  }
}

/* chapter 2 Exercise 7: one two three done! */
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

/* chapter 3 Exercise 1: overflow & underflow */
void integer_overflow ()
{
  int a = 2147483647;
  int b = 100;
  printf(" --- Adding %d and %d returns %d, which is an int overflow.\n", a, b, a+b);
}

void floating_point_overflow ()
{
  float a = 3.402823e38f;
  int b = 2;
  printf("\n --- Multiplying %f by %d returns %f, which is a floating point overflow. It appears that on my machine, replit returns it as an infinitly large number (inf).\n", a, b, a*b);
}

void floating_point_underflow ()
{
  float a = 1.175494351e-37;
  float b = 2;
  printf("\n --- Dividing \n%0.150f\n by \n%f\n returns \n%0.150f,\n which is a floating point underflow.\n", a, b, a-b);
}

/* chapter 3 Exercise 2: ASCII value to char */
void chap_3_ex_2 ()
{
  printf("Enter an ASCII code value: ");
  int output;
  scanf("%d", &output);
  printf("The character having that ASCII code is: %c\n", output);
}

/* chapter 3 Exercise 3: Alert */
void chap_3_ex_3 ()
{
  printf("***Alert sound starts playing***\n");
  printf("Startled by the sudden sound, Sally shouted, \"By the Great Pumpkin, what was that!\"\n");
}

/* chapter 3 Exercise 4: decimal & exponential notation */
void chap_3_ex_4 ()
{
  float a;
  printf("Enter a floating point number: ");
  scanf("%f", &a);
  printf("The number you entered in decimal form is: %f\n", a);
  printf("The number you entered in exponential notation is: %E\n", a);
}

/* chapter 3 Exercise 5: age, years to seconds */
void chap_3_ex_5 ()
{
  long age_year, seconds_in_a_year = 3.156 * pow(10,7);
  printf("What's your age? : ");
  scanf("%ld", &age_year);
  long age_second = age_year * seconds_in_a_year;
  printf("You are approximately %ld seconds old.\n", age_second);
}

/* chapter 3 Exercise 6: mass of molecule of water */
void chap_3_ex_6 ()
{
  int amount_entered;
  printf("Enter the amount of water in quarts: ");
  scanf("%d", &amount_entered);
  float mass_of_1_molecule = 3.0*pow(10,-23);
  int mass_of_1_quart = 950;
  // find the number of molecules in 1 quart
  float number_of_molecule_in_1_quart = mass_of_1_quart / mass_of_1_molecule;
  // find the number of molecules in the amount of water entered
  float number_of_molecule_in_amount_entered = amount_entered * number_of_molecule_in_1_quart;
  printf("The number of water molecules in that amount is approximately: %f\n", number_of_molecule_in_amount_entered);
}

/* chapter 3 Exercise 7: inches to centimeters */
void chap_3_ex_7 ()
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

  // chapter 2, Exercise 2
  printf("\nSolution to Chapter 2, Exercise 2: \n");
  chap_2_ex_2();

  // chapter 2, Exercice 3
  printf("\nSolution to Chapter 2, Exercise 3: \n");
  int age = 21;
  printf("You are %d years old which is the equivalent of %d days old.\n", age, chap_2_ex_3(age));

  // chapter 2, Exercise 4
  printf("\nSolution to Chapter 2, Exercise 4: \n");
  jolly_good();

  // chapter 2, Exercise 5
  printf("\nSolution to Chapter 2, Exercise 5: \n");
  chap_2_ex_5();

  // chapter 2, Exercise 6
  printf("\nSolution to Chapter 2, Exercise 6: \n");
  print_smile_all();

  // chapter 2, Exercise 7
  printf("\nSolution to Chapter 2, Exercise 7: \n");
  printf("starting now: \n");
  one_three();
  printf("done!\n");

  // CHAPTER 3
  // chapter 3, Exercise 1
  printf("\nSolution to Chapter 3, Exercise 1: \n");
  integer_overflow();
  floating_point_overflow();
  floating_point_underflow();

  // chapter 3, Exercise 2
  printf("\nSolution to Chapter 3, Exercise 2: \n");
  chap_3_ex_2();

  // chapter 3, Exercise 3
  printf("\nSolution to Chapter 3, Exercise 3: \n");
  chap_3_ex_3();

  // chapter 3, Exercise 4
  printf("\nSolution to Chapter 3, Exercise 4: \n");
  chap_3_ex_4();

  // chapter 3, Exercise 5
  printf("\nSolution to Chapter 3, Exercise 5: \n");
  chap_3_ex_5();

  // chapter 3, Exercise 6
  printf("\nSolution to Chapter 3, Exercise 6: \n");
  chap_3_ex_6();

  // chapter 3, Exercise 7
  printf("\nSolution to Chapter 3, Exercise 7: \n");
  chap_3_ex_7();

}
