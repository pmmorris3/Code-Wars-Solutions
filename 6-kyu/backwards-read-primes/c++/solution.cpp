#include <cmath>
#include <vector>
#include <iostream>
#include <string>

class BackWardsPrime
{
public:
  static std::string backwardsPrime(long long start, long long end);
};

bool isPrime(int n){
bool prime = true;
if (n <= 1) return false;
if (n == 2 || n == 3) return true;
for (int i{2}; i < sqrt(n) + 1; i++){
  if (n % i == 0) prime = false;
}
return prime;
}

int back(int n) {
    std::vector<std::vector<int>> digitsPow{};
    int temp{ n };
    int i{ 0 };
    while (temp != 0) {
        digitsPow.push_back({ temp % 10,i });
        temp = floor((temp - (temp % 10)) / 10);
        i += 1;
    }
    int N{ i };
    int num{ 0 };
  for (int j{0}; j < N; j++) {
        num += digitsPow[(N - 1) - j][0] * pow(10, N - 1 - digitsPow[N - 1 - j][1]);
   }
    return num;
    }
std::string BackWardsPrime::backwardsPrime(long long start, long long end){
  std::string str{};

for (long long i{start}; i <= end; i++){
  if (isPrime(i)){
    long long backwards{back(i)};
    if (isPrime(backwards) && backwards != i){
    str += std::to_string(i) + " ";
    }
  }
}
return str.substr(0,str.size()-1);
}
