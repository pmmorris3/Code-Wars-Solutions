#include <stdbool.h>
#include <stdlib.h>
int *sort( int *a, size_t n){
size_t j;
for (size_t i =1; i < n; i++){
int x = a[i];
j = i-1;
while (j >= 0 && a[j] > x){
   a[j+1] = a[j];
  j = j- 1;
}
  a[j+1] = x;
  }
return a;
}


bool comp(const int *a, const int *b, size_t n)
{
bool square = true;
if (n == 0){
return true;
}
if (n == 1){
return b[0] == a[0]*a[0];
}
int *c = (int*)malloc((n+1)*sizeof(int));
int *d = (int*)malloc((n+1)*sizeof(int));
for (int i = 0; i < n; i++){
  c[i] = a[i];
  d[i] = b[i];
} 
c[n] = '\0';
d[n] = '\0';
c = sort(c,n);
d = sort(d,n);
for (int i = 0; i < n; i++){
  if (d[i] != c[i]*c[i])
    square = false;
}
free(c);
free(d);
return square;


}