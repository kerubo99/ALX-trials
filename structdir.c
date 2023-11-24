#include <stddef.h>
#include <stdlib.h>



struct node
{
 char *dir;
 struct node *next;
};

struct node *create_path_list(char *path)
{
 struct node *head = NULL;
 struct node *tail = NULL;
 
 //parse the path string and split it into directories
 char *dir = strtok(path , ":");
 while (dir != NULL )
 {
 //create a new node for the directory
 struct node *new_node = (struct node*)malloc(sizeof(struct node));
 new_node -> dir = strdup(dir);
 new_node -> next = NULL;
 
 //add the node to the list
 if (head == NULL)
 {
  head = new_mode;
  tail = new_mode;
 }
 else
 {
  tail -> next = new_node;
  tail = new_node;
 }
 
 return head;
}
