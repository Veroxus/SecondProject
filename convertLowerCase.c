#include <string.h>
#include <stdio.h>
#define MAXSIZE 500

int convertLowerCase (char *line) {
  int total = 0;
  int stop = 0;
  int count = 0;

  while (strlen(line) > total) {
    stop = line[total];
      if (stop > 64 && stop < 91) {
        stop = stop + 32;
        line[total] = stop;
        count++;
      }
    total++;
  }
  return (count);
}
