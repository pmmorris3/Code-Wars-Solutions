#include<vector>
#include<algorithm>
using namespace std;
class Same {
    public :static bool comp(vector<int> a, vector<int> b);
};

bool Same::comp(vector<int> a,vector<int> b){


for (size_t i= 0; i < a.size(); i++){
a[i] *= a[i];
}

sort(a.begin(),a.end());
sort(b.begin(),b.end());

return a == b;
}