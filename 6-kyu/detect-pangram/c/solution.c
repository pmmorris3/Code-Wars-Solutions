#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
char * removeWhite(char *str, size_t len)
{
int c =0;
int d = 0;
char blank[len];
   while (str[c] != '\0')
   {
      if (isalpha(str[c]) !=0&& isdigit(str[c])== 0){
        blank[d] = str[c];
        d++;
      }
      c++;
   }
   blank[d] = '\0';
char *ret = malloc(len);
strcpy(ret,blank);
ret[d] = '\0';
return ret;
}
char * unique(char *str,size_t len){
char a[len];
size_t k = 0;
for (size_t i=0;i<len;i++){
  int c = 1;
    for (size_t j=0;j<i;j++){
      if (str[i] == str[j]){
          ++c;
      }
    }
  if (c <= 1){
  a[k] = str[i];
  ++k;
  }
}
char *ret = malloc(len);
strcpy(ret,a);
ret[k] = '\0';
return ret;
}

bool is_pangram(const char *str_in) {
char *str = strdup(str_in);
str = removeWhite(str,strlen(str));
for (size_t i = 0; i < strlen(str); i++){
str[i] = tolower(str[i]);
}
str = unique(str,strlen(str));
return strlen(str) == 26;
}