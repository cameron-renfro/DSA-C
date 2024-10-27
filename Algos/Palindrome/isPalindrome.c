#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


bool isPalindrome(char * str) {
  char * temp;
  char * comp;
  temp = (char *) malloc(sizeof(str));

  if (temp == NULL) {
    // To-do: convert to error printing
    return false;
  }


  for (int i = 0; i < strlen(str); i++) {
    if (isalnum(str[i])) {
      str[i] = tolower(str[i]);
      temp[i] = str[i];
    } 
  }

  comp = (char *) malloc(sizeof(temp));

  for (int i = strlen(temp); i >= 0; i--) {
    comp[i] = temp[i];
  }

  if (temp == comp) {
    return true;
  } else {
    free(temp);
    free(comp);
    temp = NULL;
    comp = NULL;
    return false;
  }
}

int main() {
  char *s = "owlwo";
  bool test = isPalindrome(s);


  return 0;
}
