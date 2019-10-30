#include <string.h>
#include <stdio.h>
#define MAXSIZE 500

int replaceDigits (char *line) {
    int total = 0;
    int stop = 0;
    int count = 0;

    while (strlen(line) > total) {
      stop = line[total];
        if (stop > 47 && stop < 58) {
          line[total] = ' ';
          count++;
        }
      total++;
    }
  return (count);
}
