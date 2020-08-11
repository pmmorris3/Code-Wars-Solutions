#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
** @param str: a C-string containing only lowercase letters and spaces (' ')
** @return:    a C-string allocated on the heap containing the highest scoring word of str
*/
int score(char *str, size_t len){
int sum = 0;
for (size_t i = 0; i < len; i++){
  sum += (int)str[i]-96;
}
return sum;
}


char  *highestScoringWord(const char *str)
{
size_t N = strlen(str);
char *s = malloc(N);
for (size_t i = 0; i < N; i++){
  s[i] = str[i];
}
s[N] = '\0';
char *p = strtok(s," ,.-\t");
char *ret = strdup(p);
int max = score(ret,strlen(ret));
 while (p != NULL)
    {
        int val = score(p,strlen(p));
        if (val > max){
          free(ret);
          ret = strdup(p);
          max = val;
        }
        p = strtok(NULL, " ,.-\t");
    }
return ret; 
  }