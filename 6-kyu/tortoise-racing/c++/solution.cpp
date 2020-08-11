#include <cmath>

using namespace std;



class Tortoise
{
public:
    static vector<int> race(int v1, int v2, int g){
      if (v1 >= v2) return {-1,-1,-1};
      
      double time = (double)g/(v2 - v1); //in hours
      int hours = floor(time);
      int minutes = floor((time - (double)hours)*(60));
      double seconds_not = ((time-(double)hours)*60 - (double) minutes)*60;
      int seconds = floor( ((time-(double)hours)*60 - minutes)*60) ;
      if (ceil(seconds_not) - seconds_not < 0.0001){ //use this to combat the issue with rounding
        seconds = ceil(seconds_not);
        seconds = seconds % 60;
        if (ceil(seconds_not) == 60) minutes+=1;
      }
      return {hours,minutes,seconds};
      
      
    
    
                                                  }
};