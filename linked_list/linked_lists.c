#include <stdio.h>
#include <stdlib.h>


//Lets think about it like a train

struct node{

  int value; //Passangers on this specific traincar
  char car_letter;
  struct node *next; //Pointing to the next "train car"
};

struct  node *add_to_list(struct node *list, int n, char letter); //We're adding a traincar to the train

int main(void) {
    struct node *first = NULL; // So the first traincar isnt connected to anything and doesnt really have any passangers

    first = add_to_list(first, 10, 'A'); //Lets add a traincar to the beginning of a train. In add to list, its using the first thats already initialized
    first = add_to_list(first, 20, 'B'); //Again, lets add another new traincar to the beginning! So now the new first is this train car!
    first = add_to_list(first, 30, 'C'); //Pretty much repeating above

    struct node *p; //We're just going to print the amount of passangers in each traincar, starting from the FIRST
    for(p = first; p != NULL; p = p->next){//Automatically, the last node will point to NULL
      printf("%d has letter %c\n", p->value, p->car_letter);
    }


  return 0;
}

struct  node *add_to_list(struct node *list, int n, char letter) //*LIST REFERS TO THE FIRST NODE, A.K.A THE FIRST TRAINCAR IN THE LIST. NOTICE THAT FIRST KEEPS CHANGING
{
  struct node *new_node;

  new_node = malloc(sizeof(struct node)); //I LOVE THIS BECAUSE WE CAN KEEP ADDING IN NODES IN A LIST OF NODES OF UNDECLARED LENGTH!
  if(new_node == NULL)
  {
    printf("Malloc failed!\n");
    return list;
  }

  new_node->value = n; // This is how many peopple are in tis traincar!
  new_node->car_letter = letter;
  new_node->next = list; //PAY ATTENTION HERE! All this is saying is that this node will now point to the current first node. Note: It isnt the first node YET!
  return new_node; //NEW NODE WILL NOW BE THE FIRST NODE!!!!!









}
