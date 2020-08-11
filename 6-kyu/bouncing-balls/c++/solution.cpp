using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window){
      if (h <= 0 || bounce <= 0 || bounce >= 1 || window >= h){
      return -1;
      }
      double x = h*bounce;
      int N = 1;
      while ( x > window){
      x *= bounce;
      N+=2;
      }
      return N;
      
  }
};

