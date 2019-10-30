#include <string.h>
#include <stdio.h>
#define MAXSIZE 500

int replacePunc (char *line) {
  int total = 0;
  int stop = 0;
  int count = 0;

  while (strlen(line) > total) {
    stop = line[total];
      if ((stop > 32 && stop < 48) || (stop > 57 && stop < 65) || (stop > 90 && stop < 97) || (stop > 122 && stop < 256)) {
        line[total] = 32;
        count++;
      }
    total++;
  }
  return (count);
}
