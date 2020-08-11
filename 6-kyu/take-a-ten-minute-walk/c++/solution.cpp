#include<vector>
bool isValidWalk(std::vector<char> walk) {
  std::vector<std::vector<int>> comDirects{};
  if (walk.size() == 10){
    for (auto dir : walk){
      if (dir == 'n') comDirects.push_back({0,1});
      if (dir == 'e') comDirects.push_back({1,0});
      if (dir == 'w') comDirects.push_back({-1,0});
      if (dir == 's') comDirects.push_back({0,-1});
    }
    int sum1{};
    int sum2{};
    for (auto pair : comDirects){
      sum1 += pair[0];
      sum2 += pair[1];
    }
    if (sum1 == 0 && sum2 == 0) return true;
  }
  return false;
}