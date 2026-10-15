#include <stdio.h>
#include <string.h>

int main() {
  char command[100];

  for (;;) {
    fgets(command, sizeof(command), stdin);

    command[strlen(command) - 1] = '\0';

    char * cmd = strtok(command, " ");

    if (strcmp(cmd, "SET") == 0) {
      const char * key = strtok(NULL, " ");
      const char * value = strtok(NULL, " ");

    } else if (strcmp(cmd, "GET") == 0) {
      const char * key = strtok(NULL, " ");
      
    } else if (strcmp(cmd, "DELETE") == 0) {
      const char * key = strtok(NULL, " ");
      
    } else if (strcmp(cmd, "EXIT") == 0) {
      return 0;
    }
  }
  return 0;
}
