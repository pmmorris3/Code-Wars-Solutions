#include <stddef.h>
#include<stdio.h>
#include<stdlib.h>

int* delete_nth(size_t szin, int order[szin], int max_e, size_t *szout) {
int a[szin];
size_t k = 0;
for (size_t i=0;i<szin;i++){
  int c = 1;
    for (size_t j=0;j<i;j++){
      if (order[i] == order[j]){
          ++c;
      }
    }
  if (c <= max_e){
  a[k] = order[i];
  ++k;
  }
}
int* b = malloc(k*sizeof(int));
for (size_t i=0; i<k;i++){
b[i] = a[i];
}
*szout = k;
return b;
}