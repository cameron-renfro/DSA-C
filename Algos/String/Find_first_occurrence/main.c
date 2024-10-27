#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
  printf("%s\n", haystack);
  printf("%s\n", needle);

  strchr(haystack, 0);
  
  return -1;
}

int main() {
  char * test = "sadbutsad";
  char * comp = "sad";

  strStr(test, comp);

  return 0;
}