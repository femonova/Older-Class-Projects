/* Takes phone number from user and saves it in a file*/

#include <stdio.h>
#include <string.h>

#define N 20
int main(int argc, char const *argv[]) {

  FILE *phone_file;
  char *tok;
  char user_number[N];

  printf("Please enter phone number in the following format: (Area Code)-XXX-XXXX\n");
  scanf("%[^\n]", user_number); // Reads in phone number from user

  phone_file = fopen("phone_list.txt", "w");
  fprintf(phone_file, "%s\n", user_number); //IF YOU WANT TO SAVE ENTIRE NUMBER, PUT THIS BEFORE YOU TOKEN! IF YOU DONT ITLL PRINT "(954"

  tok = strtok(user_number, "()");

  fprintf(phone_file, "%s\n", tok);

  fclose(phone_file);

  printf("I saved the entire number and area code!\n");

  return 0;
}
