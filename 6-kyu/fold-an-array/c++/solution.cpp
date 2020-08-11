

using namespace std;

class Kata
{
public:
    vector<int> foldArray(vector<int> array, int runs)
    {  
      if (runs == 0){
        return array;}
    
        vector<int> folded{};
        int N = array.size();
        if (N % 2 == 1){
        int K = (N+1)/2;
        int j = N-1;
        for (int i{0};i < K-1; i++){
              array[i] += array[j];
              j--;
          }
        for (int l{0};l <= K-1; l++){
          folded.push_back(array[l]);
        }

        }
        if (N % 2 == 0){
        int K = (N)/2;
        int j = N-1;
        for (int i{0};i <= K-1; i++){
            array[i] += array[j];
              j--;
          }
        for (int l{0};l <= K-1; l++){
          folded.push_back(array[l]);
        }
      
        }
        return foldArray(folded,runs-1);
    }
};