#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Character_Count_Pair {
    char character;
    size_t count;
} ccp;

char* getChars(const char *strin){
  int N = strlen(strin);
  char *ret = calloc(N+1,1);
  for (int i = 0; i < N; i++){
    char c[] = "a";
    c[0] = strin[i];
    int found = 0;
    for (int j = 0; j < i; j++){
      if (c[0] == strin[j]){
        found = 1;
      }
    }
    if (found == 0){
      strcat(ret,c);
    }
  }
  return ret;
}

ccp* ordered_count(const char *strin, size_t *szout) { // assign output length to szout
  int N = strlen(strin);
  char *ptr;
  ptr = getChars(strin);
  int M = strlen(ptr);
  ccp *ret = calloc(M+1,sizeof(ccp));
  for (int i =0; i < M; i++){
    char c = ptr[i];
    ret[i].character = c;
    ret[i].count = 0;
    for (int j = 0; j < N; j++){
      char d = strin[j];
      if (c == d) ret[i].count += 1;
    }
  }
  *szout = M;
  free(ptr);
  return ret;
}