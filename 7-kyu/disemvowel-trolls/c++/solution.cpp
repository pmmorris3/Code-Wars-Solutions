# include <string>
# include <vector>
using namespace std;
string disemvowel(string str)
{
  vector<char> v {'a','e','i','o','u'};
  
  for (int i {0}; i < str.size(); i++){
    for (auto let : v){
        if (tolower(str[i]) == let){
          str.erase(i,1);
          i--;
        }
        }
        }
  return str;
        }
