#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


char * DuplicateEncoder(char * str)
{
  int N = strlen(str);
  char * ret = (char *) calloc(N + 1,1);
  for (int i = 0; i < N; i++)
  {
    int count = 1;
    for (int j = 0; j < i; j++)
      {
        if (tolower(str[i]) == tolower(str[j])) count += 1;
      }
    for (int j = i + 1; j < N; j++)
      {
        if (tolower(str[i]) == tolower(str[j])) count += 1;
      }
    if (count == 1) strcat(ret,"(");
    else strcat(ret,")");
  }
  ret[N] = '\0';
  return  ret;
}
