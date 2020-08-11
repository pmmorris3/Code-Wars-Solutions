#include <string.h>
#include <stdio.h>
char* remove_char(char* dst, const char* src)
{
size_t N = strlen(src)-2;
char a[N];
for (size_t i=0; i < N;i++){
a[i] = src[i+1];
}
if (N > 0){
strcpy(dst,a);
dst[N] = '\0';
return dst;
}
dst[0] = '\0';
return dst;
}