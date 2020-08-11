#include<stdlib.h>
typedef unsigned long long ull;



unsigned long long* productFib(ull prod) {
  ull n = 2;
  ull Fn=1;
  ull Fn1=1;
  ull *ret = calloc(3,sizeof(ull));
  while (Fn * Fn1 < prod){
    ull swap = Fn;
    Fn = Fn1;
    Fn1 += swap;
    n += 1;
  }
  ret[0] = Fn;
  ret[1] = Fn1;
  if (Fn * Fn1 == prod) ret[2] = 1;
  else ret[2] = 0;
  return ret;
}
