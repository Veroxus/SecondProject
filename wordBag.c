#include <string.h>
#include <stdio.h>
#define MAXSIZE 500

int main (int argc, char *argv[]) {
  char line[MAXSIZE];
  char words;
  fgets( words, MAXSIZE, stdin );

    if (words == line[0]) {
      printf("%s",words);
      return (0);
    }
      else {
        printf("hey%s",words);
        return (0);
      }



 return(0);
}
