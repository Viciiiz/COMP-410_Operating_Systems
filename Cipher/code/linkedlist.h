typedef struct char_node
{
  char value;
  struct char_node* next;
} char_node_t;

typedef struct char_queue
{
  char_node_t* head;
  char_node_t* tail;
} char_queue_t;

char_node_t* new_char_node(char value);
char_queue_t* new_queue();
void add_to_queue(char_queue_t* queue, char value);
void print_queue(char_queue_t* queue);
void delete_queue(char_queue_t* queue);
int contains_in_queue(char_queue_t* queue, char value);
void get_line(char_node_t* node, char* string);
char_node_t* next_node(char_node_t* node);
char_node_t* delete_node(char_queue_t* queue);

