#include <stdio.h>
#include <string.h>

int main() {
  char command[100];
  for (;;) {
    fgets(command, sizeof(command), stdin);

    command[strlen(command) - 1] = '\0';

    if (strcmp(command, "SET") == 0) {
      
    } else if (strcmp(command, "GET") == 0) {
      
    } else if (strcmp(command, "DELETE") == 0) {
      
    } else if (strcmp(command, "EXIT") == 0) {
      
    }
  }
  return 0;
}
