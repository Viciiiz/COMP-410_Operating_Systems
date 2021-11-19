#define MAX_LENGTH 1000

typedef struct list_
{
   char name[MAX_LENGTH];
   int size;
} list_;

list_* list_constructor();
void add_value(list_* n, char* val, int size);
void print_values(list_* n, int size);
char * access_index(list_* n, int index);
void empty_list (list_* n, int size);
void remove_index (list_* n, int index, int size);
int find_element_index(char* element, list_* n, int size);
int element_exists(char* element, list_* n, int size);
int is_empty(list_* n);


list_* separate_two(char * str);
