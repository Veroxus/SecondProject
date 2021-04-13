#include <string.h>
#include <stdio.h>
#define MAXSIZE 500

int reduceSpace (char *line) {
  int total = 0;
  int stop = 0;
  int count = 0;
  int a;

  while (strlen(line) > total) {
    stop = line[total];
      if (stop == 44) {
        stop = line[total + 1];
          if (stop == 44) {
            count++;
            for (a = 0; ((strlen(line) - stop) + 1) > a; a++) {
              line[stop+a] = line[stop+1+a];
            }
          }
      }
    total++;
  }
  return (count);
}
