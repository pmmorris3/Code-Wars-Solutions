
using namespace std;


pair<size_t, size_t> two_sum(const vector<int>& numbers, int target) {
    int i {0};
    int j {0};

  for (auto num1 : numbers){
      for (auto num2 : numbers){
        if (num1 + num2 == target && i != j){
            return {i,j};}
          j++;}
      j = 0;
          i++;}
}