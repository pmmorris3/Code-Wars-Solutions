#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

char* likes(size_t n, const char *const names[n]) {
char *like;
char str[10];
int N;
like = (char *)malloc(100 * sizeof(char));
if (n == 0){
strcpy(like,"no one likes this");
}
if (n == 1){
strcpy(like,names[0]);
strcat(like, " likes this");
}
if (n == 2){
strcpy(like, names[0]);
strcat(like," and ");
strcat(like, names[1]);
strcat(like, " like this");
}
if (n == 3){
strcpy(like, names[0]);
strcat(like,", ");
strcat(like, names[1]);
strcat(like," and ");
strcat(like, names[2]);
strcat(like, " like this");
}
if (n >= 4){
strcpy(like, names[0]);
strcat(like,", ");
strcat(like, names[1]);
strcat(like," and ");
N = n - 2;
sprintf(str, "%d",N);
strcat(like, str);
strcat(like," others");
strcat(like, " like this");
}
return like;
}