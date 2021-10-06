#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

// print double array elements
void print_array_double(double *arr, int len) 
{
printf("\n");
for (int i = 0; i < len; i++) printf("%lf, ", arr[i]);
printf("\n");
}

// print char array elements
void print_array_char(char *arr, int len) 
{
printf("\n");
for (int i = 0; i < len; i++) printf("%c", arr[i]);
printf("\n");
}

// chapter 10
// chapter 10 ex 2: copy array in 2 different ways
// with array notation
void copy_arr(double *source, double *target, int array_length)
{
	for (int i = 0; i < array_length; i++)
		target[i] = source[i];
}
// using pointer notation
void copy_ptr(double *source, double *target, int array_length)
{
	for (int i = 0; i < array_length; i++)
		*(target + i) = *(source + i);
}

// chapter 10 ex 3: max int in array
int max(int *arr, int len)
{
  if (len < 1) return 0;
	int max = arr[0];
	for (int i = 1; i < len; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

// chapter 10 ex 4: index of largest value
int max_index(double *arr, int len)
{
  if (len < 1) return 0;
  double max_value = arr[0];
  int max_index = 0;
	for (int i = 1; i < len; i++)
		if (arr[i] > max_value)
    {
      max_value = arr[i];
      max_index = i;
    }
			
	return max_index;
}

// chapter 10 ex 5: diff between max and min
double diff_max_min(double *arr, int len)
{
  double max_value = arr[0], min_value = arr[0];
  
	for (int i = 1; i < len; i++)
  {
		if (arr[i] > max_value)
      max_value = arr[i];
    if (arr[i] < min_value)
      min_value = arr[i];
  }
			
	return max_value - min_value;
}

// chapter 11
// chapter 11 ex 1: store input in array
char * chap_11_ex_1(char *arr, int n)
{
	char ch;
	for (int i = 0; i < n; i++)
	{
		if ((ch = getchar()) == EOF) break;
		else if (ch == '\n') *(arr + i) = '\n';
    else if (ch == '\t') *(arr + i) = '\t';
    else *(arr + i) = ch;
	}
	return arr;
}

// chapter 11 ex 2: store input in array until blank or new line
char * chap_11_ex_2(char *arr, int n)
{
	int count = 0;
	char ch;

	while ((ch = getchar()) != EOF && !isspace(ch))
	{
		if (count > n) break;
		*(arr + count) = ch;
		count++;
	}

  while ((ch = getchar()) != EOF) continue;
	return arr;
}

// chapter 11 ex 3: get first word from input
char * chap_11_ex_3(char *arr, int n)
{
	int count = 0;
	char ch;

  // get rid of any non-word char
  while ((ch = getchar()) == ' ' || ch == '\n' || ch == '\t') continue;

	while (ch != EOF && !isspace(ch))
	{
		if (count > n) break;
		*(arr + count) = ch;
		count++;
    ch = getchar();
	}

  while ((ch = getchar()) != EOF) continue;
	return arr;
}

// chapter 11 ex 4: find first occurrence of ch in string
char * find(char * string, char ch)
{
  while(*string!='\0')
  {
    if(*string == ch) return string;
    string++;
  }
  return NULL;
}

void chap_11_ex_4()
{
  char string[50];
  char ch;
  char *output;
  while(string[0]!='#')
  {
    printf("Enter string (\"#\" to stop): ");
    fgets(string, 50, stdin);
    if(string[0] == '#') break;
    printf("Enter char to find: ");
    ch = getchar();
    output = find(string, ch);
    if(output == NULL) printf("Not found.\n");
    else printf("\nPosition of char in string: %p and that value is: %c.\n", output, *output);
    char c = getchar();
  }
}

// chapter 11 exercise 5: return 0 if char is not in string
int is_within(char ch, char *string)
{
   while(*string!='\0')
  {
    if(*string == ch) return 1;
    string++;
  }
  return 0;
}

void chap_11_ex_5()
{
  char string[50];
  char ch;
  int output;
  while(string[0]!='#')
  {
    printf("Enter string (\"#\" to stop): ");
    fgets(string, 50, stdin);
    if(string[0] == '#') break;
    printf("Enter char to find: ");
    ch = getchar();
    output = is_within(ch, string);
    if(output == 0) printf("Not found.\n");
    else printf("\nThe char \"%c\" is in the string.\n", ch);
    char c;
    // remove remaining chars.
    while((c = getchar())!='\n') continue;
  }
}

// chapter 11 ex 6: copy string source to string destination
char * copy(char *s1, char *s2, int n)
{
  if (n-1 > strlen(s2)) 
    return NULL;
  for(int i = 0; i < n; i++)
  {
    if(i < strlen(s1)) s1[i] = s2[i];
  }
  if(n < strlen(s1))
    for(int i = n ; i < strlen(s1); i++)
      s1[i] = '\0';
  return s1;
}

void chap_11_ex_6()
{
  char s1[10];
  char s2[10];
  int n;
  int output;
  while(1)
  {
    printf("Enter string destination: ");
    fgets(s1, 10, stdin);
    printf("Enter string source (\"#\" to stop): ");
    fgets(s2, 10, stdin);
    if(s1[0] == '#' || s2[0] == '#') break;
    printf("Enter number of char to copy: ");
    scanf("%d", &n);
    
    if (n<strlen(s2)-1)
    {
      copy(s1, s2, n);
      printf("\nThe value of the destination is now: %s.\n", s1);
    } 
    else printf("n can't be longer than the string to copy.\n");
    
    char c;
    // remove remaining chars.
    while((c = getchar())!='\n') continue;
  }
}

// chapter 11 exercise 7: if second string is contained in the first string, return address
char * string_in(char *s1, char *s2)
{
  int count = 0;
  for (int i = 0; i < strlen(s1); i++)
  {
    count = 0;
    for(int j = 0; j < strlen(s2)-1; j++)
    {
      if (s1[i+j] == s2[j]) count++;
      else break;
    }
    if(count+1 == strlen(s2)) return &s1[i];
  }
  return NULL;
}

void chap_11_ex_7()
{
  char s1[20];
  char s2[20];
  int output;
  while(1)
  {
    printf("\nEnter string 1: ");
    fgets(s1, 20, stdin);
    printf("Enter string 2 (\"#\" to stop): ");
    fgets(s2, 20, stdin);
    if(s1[0] == '#' || s2[0] == '#') break;
    char * output;
    output = string_in(s1, s2);
    if(output == NULL) {
      printf("s2 is not in s1.\n");
      continue;
    }
    printf("s2 is in s1 at position: %p.\n", output);
  }
}

// chapter 11 ex 8: replace content of a string with the string reversed.
char * reverse(char string [20])
{
  char rev[strlen(string)];
  for(int i = 0 ; i < strlen(string); i++)
  {
    rev[i] = string[strlen(string)-1-i];
  }

  for(int i = 0 ; i < strlen(string); i++)
  {
    *(string + i) = rev[i];
  }
  return string;
}

void chap_11_ex_8()
{
  char s1[20];
  while(1)
  {
    printf("\nEnter string (\"#\" to stop): ");
    fgets(s1, 20, stdin);
    if(s1[0] == '#') break;
    printf("Your input %s at position %p ", s1, &s1);
    strcpy(s1, reverse(s1));
    printf(" is now %s at position %p.\n", s1, &s1);
  }
}

// chapter 11 ex 9: remove space from a string
char *remove_space(char s1[20])
{
  char temp[20];
  int index = 0;
  for(int i = 0 ; i < strlen(s1); i++)
  {
    if(s1[i]!=' ') 
    {
      temp[index] = s1[i];
      index++;
    }
  }
  for(int i = 0 ; i < strlen(s1); i++)
  {
    s1[i] = temp[i];
  }
  return s1;
}

void chap_11_ex_9()
{
  char s1[20];
  while(1)
  {
    printf("\nEnter string (\"#\" to stop): ");
    fgets(s1, 20, stdin);
    if(s1[0] == '#') break;
    printf("Your input %s at position %p ", s1, &s1);
    strcpy(s1, remove_space(s1));
    printf(" is now %s at position %p.\n", s1, &s1);
  }
}

// chapter 12
// chapter 12 exercise 1: Listing 12.4
void critic(int *units) {
	printf("No luck, my friend. Try again.\n");
	scanf("%d", units);
}

void chap_12_ex_1()
{
  int units;
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic(&units);
	printf("You must have looked it up!\n");
	
}

// chapter 12 exercise 2: redesigning ex 2
void set_mode(int *mode)
{
  int metric = 0;
  int us = 1;
  int quit = -1;
	int new_mode = 2;
	printf("Enter 0 for metric mode, 1 for US mode (-1 to quit): ");

	if (scanf("%d", &new_mode) != 1)
		while (getchar() != '\n') continue;

	if (new_mode == metric || new_mode == us || new_mode == quit)
		*mode = new_mode;
	else
	{
		printf("Invalid mode specified. Mode %d(%s) used.\n",
			*mode, *mode == metric ? "metric" : "US");
	}

}

void get_info(int mode, double *distance, double *fuel)
{
  int metric = 0;
	printf("Enter distance travelled in %s: ",
		mode == metric ? "kilometers" : "miles");
	while (scanf("%lf", distance) != 1)
	{
		while (getchar() != '\n') continue;
		printf("Invalid input. Enter distance travelled in %s: ",
			mode == metric ? "kilometers" : "miles");
	}

	printf("Enter fuel consumed in %s: ",
		mode == metric ? "liters" : "gallons");
	while (scanf("%lf", fuel) != 1)
	{
		while (getchar() != '\n') continue;
		printf("Invalid input. Enter fuel consumed in %s: ",
			mode == metric ? "liters" : "gallons");
	}
}

void show_info(int mode, double distance, double fuel)
{
	double efficiency;
  int metric = 0;
  int us = 1;
	if (mode == metric)
	{
		efficiency = fuel / distance * 100;
		printf("Fuel consumption is %.3f liters per 100 kilometers.\n",
			efficiency);
	}
	else if (mode == us)
	{
		efficiency = distance / fuel;
		printf("Fuel consumption is %.3f miles per gallon.\n",
			efficiency); 
	}
	else
	{
		printf("Error. Invalid mode: %d\n", mode);
	}

}

void chap_12_ex_2()
{
  int mode = 0;
	double distance, fuel;
	set_mode(&mode);
	while (mode >= 0)
	{
		get_info(mode, &distance, &fuel);
		show_info(mode, distance, fuel);
		set_mode(&mode);
	}
	printf("Done.\n");
}

// chapter 12 ex 3: function that calls the number of times it was called
int call_this(){
  static int count_rep = 0;
  return ++count_rep;
}

void chap_12_ex_3()
{
  int count;
  printf("Enter a integer: ");
  scanf("%d", &count);
  for(int i = 0; i < count; i++)
  {
    printf("Function call # %d\n", call_this());
  }
}

// chapter 12 ex 4: sorted random numbers
int generate_randoms(int lower, int upper)
{
  return (rand() % (upper - lower + 1)) + lower;
}

void sorting(int input[100])
{
  int output[100];
  int current = 10;
  int index = 0;
 int len = 100;
  for(int i = 0; i < len; i++)
    output[i] = input[i];

  for(int i = 0; i < len; i++)
  {
    for(int j = 0; j < len; j++)
    {
      if(output[j] == current && current > 0) 
      {
        input[index] = output[j];
        index++;
      }
    }
    current--;
  }
}

void chap_12_ex_4()
{
  int sorted_randoms[100];
  srand(time(0));
  for(int i = 0; i < 100; i++)
    sorted_randoms[i] = generate_randoms(1, 10);
   sorting(sorted_randoms);
  int len = sizeof(sorted_randoms) / sizeof(sorted_randoms[0]);
  for(int i = 0; i < len; i++)
  {
    printf("%d, ", sorted_randoms[i]);
  }
   printf("which is a sorted int array of length %d.\n", len);
}

// chapter 12 ex 5: count number of times a random number appeared out of 1000 random numbers.
void count_random(int arr[1000])
{
  int len = 1000, current = 0;
  int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, ten = 0;
  for(int i = 0; i < len; i++)
  {
      switch(arr[i]){
        case 1: {one++; break;}
        case 2: {two++; break;}
        case 3: {three++; break;}
        case 4: {four++; break;}
        case 5: {five++; break;}
        case 6: {six++; break;}
        case 7: {seven++; break;}
        case 8: {eight++; break;}
        case 9: {nine++; break;}
        case 10: {ten++; break;}
        default: break;
      }
  }
  printf("One appeared %d times\nTwo appeared %d times\nThree appeared %d times\nFour appeared %d times\nFive appeared %d times\nSix appeared %d times\nSeven appeared %d times\nEight appeared %d times\nNine appeared %d times\nTen appeared %d times\n\n", one, two, three, four, five, six, seven, eight, nine, ten);
}

void chap_12_ex_5()
{
  int random[1000];
  for(int j = 0; j < 10; j++)
  {
    for(int i = 0; i < 1000; i++)
      random[i] = generate_randoms(1, 10);
    count_random(random);
  }
  printf("If rand() alone is used, the output will be similar because rand() doesn't really output random numbers. They are \"predefined\" random numbers. But since srand(time(0)) was called, the rand() will generate random numbers based on the current time which will result in different random values for each call.\n");  
}

// chapter 12 ex 6: roll dice
static int roll_one_die(int sides) // sides is the number of sides of the die
{
	return rand() % sides + 1;
}

int roll_multiple_die(int dice, int sides)
{
	int total = 0;
	for (int i = 0; i < dice; i++)
		total += roll_one_die(sides);
	return total;
}

void roll_multiple_sets(int sets, int dice, int sides)
{
	printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);
	for (int i = 0; i < sets; i++)
		printf("%2d ", roll_multiple_die(dice, sides));
	putchar('\n');
}

void chap_12_ex_6()
{
  int sets, dice, sides;

	puts("Enter the number of sets; enter q to stop.");
	while (scanf("%d", &sets) == 1 && sets > 0)
	{
		dice = sides = -1;
		printf("How many sides and how many dice? ");
		scanf("%d %d", &sides, &dice);
		while (dice < 0 || sides < 0)
		{
			while (getchar() != '\n') continue;
			puts("Invalid input. Positive integers only.");
			puts("How many sides and how many dice? ");
			scanf("%d %d", &sides, &dice);
		}

		roll_multiple_sets(sets, dice, sides);

		puts("How many sets? Enter q to stop.");
	}
}





int main(){
  // chapter 10 ex 2
  printf("Chapter 10 ex 2: \n");
  double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	copy_arr(source, target1, 5);
  copy_ptr(source, target1, 5);
  print_array_double(target1, 5);

  // chapter 10 ex 3
  printf("\nChapter 10 ex 3: \n");
  int arr1[6] = {2,45,3,67,3,23};
  printf("Max = %d.\n", max(arr1, 6));

  // chapter 10 ex 4
  printf("\nChapter 10 ex 4: \n");
  double arr2[6] = {1.7,45,3,67.3,3.7,23.1};
  printf("The index of the max value is: %d\n", max_index(arr2, 6));

  // chapter 10 ex 5
  printf("\nChapter 10 ex 5: \n");
  printf("The difference between the max and min in the array is: %lf\n", diff_max_min(arr2, 6));  

  // chapter 11 ex 1
  printf("\nChapter 11 ex 1: \n");
  char input[50] = {0}; 
  printf("Enter less than 50 chars until EOF: ");
  print_array_char(chap_11_ex_1(input, 50), 50);

  // chapter 11 ex 2
  printf("\nChapter 11 ex 2: \n");
  char input2[50] = {0}; 
  printf("Enter less than 50 chars until EOF: ");
  print_array_char(chap_11_ex_2(input2, 50), 50);

  // chapter 11 ex 3
  printf("\nChapter 11 ex 3: \n");
  char input3[50] = {0}; 
  printf("Enter less than 50 chars until EOF: ");
  print_array_char(chap_11_ex_3(input3, 50), 50);

  // chapter 11 ex 4
  printf("\nChapter 11 ex 4: \n");
  chap_11_ex_4();

  // chapter 11 ex 6
  printf("\nChapter 11 ex 6: \n");
  chap_11_ex_6();

 // chapter 11 ex 5
  printf("\nChapter 11 ex 5: \n");
  chap_11_ex_5();
  // chapter 11 ex 7
  printf("\nChapter 11 ex 7: \n");
  chap_11_ex_7();

  // chapter 11 ex 8
  printf("\nChapter 11 ex 8: \n");
  chap_11_ex_8();

  // chapter 11 ex 9
  printf("\nChapter 11 ex 9: \n");
  chap_11_ex_9();

  // chapter 12 ex 1
  printf("\nChapter 12 ex 1: \n");
  chap_12_ex_1();

  // chapter 12 ex 2
  printf("\nChapter 12 ex 2: \n");
  chap_12_ex_2();

  // chapter 12 ex 3
  printf("\nChapter 12 ex 3: \n");
  chap_12_ex_3();

  // chapter 12 ex 4
  printf("\nChapter 12 ex 4: \n");
  chap_12_ex_4();

  // chapter 12 ex 5
  printf("\nChapter 12 ex 5: \n");
 chap_12_ex_5();

  // chapter 12 ex 6
  printf("\nChapter 12 ex 6: \n");
  chap_12_ex_6();
} 

