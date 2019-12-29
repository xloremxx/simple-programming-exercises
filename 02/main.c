#include <stdio.h>
#include <string.h>

/* Write a program that asks the user for their 
 * name and greets them with their name.
 */

int main(int argc, char *argv[])
{

  char name[30];

  printf("Name: ");
  fgets(name, 30, stdin);

  name[strlen(name)-1] = '\0';

  printf("Welcome %s!\n", name);

  return 0;
}
