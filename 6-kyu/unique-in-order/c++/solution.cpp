#include <vector>
#include <string>
template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& v){
std::vector<T> ret;
size_t N = v.size();
for (size_t i = 0; i < N - 1; i++){
  if (v.at(i) == v.at(i+1))
    continue;
  ret.push_back(v[i]);
}
ret.push_back(v[N-1]);
return ret;
}
std::vector<char> uniqueInOrder(const std::string& v){
std::vector<char> ret;
size_t N = v.size();
if (N == 0){
return ret;
}
for (size_t i = 0; i < N - 1; i++){
  if (v[i] == v[i+1])
    continue;
  ret.push_back(v[i]);
}
ret.push_back(v[N-1]);
return ret;
}
void printvec(std::vector<int> v){
  for (auto c : v)
    std::cout << c <<" ";
  std::cout << std::endl;
}
void printvec(std::vector<char> v){
  for (auto c : v)
    std::cout << c <<" ";
  std::cout << std::endl;
}

