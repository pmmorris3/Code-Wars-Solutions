#include <cmath>

class Arge
{
  public:  
  
static int nbYear(int p0, double percent, int aug, int p){
if (p0 == p) return 0;
int x = p0 + p0*(percent/100) + aug;
int N = 1;
while(p-x > 0){
N += 1;
x += x*(percent/100) + aug;
}
return N;
}
};


