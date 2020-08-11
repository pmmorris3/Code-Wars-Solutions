#include <string>
#include <regex>
#include <set>
using namespace std;

size_t duplicateCount(const std::string& in); // helper for tests

size_t duplicateCount(const char* in)
{
regex alphanum("[abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789]");
string str = in;
int size = str.size();
set<char> dupes{};
for (int i{0}; i < size; i++){
  string let = str.substr(i,1);
  if (regex_match(let,alphanum)) {
    for (int j{i+1}; j < size; j++)  {
      if (tolower(str[i]) == tolower(str[j])){
          dupes.insert(tolower(str[i]));
                                              }
                                      }
                                  }
                                }
  return dupes.size();}
