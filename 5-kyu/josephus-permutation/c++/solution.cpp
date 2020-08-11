std::vector < int> josephus(std::vector < int > items, int k) {
 std::vector<int> dead{};
   int i{0};
   int next{k};
 while (items.size() != 0){
   next -= 1;
   if (i >= items.size()) i = (i % items.size());
   if (next == 0){
     dead.push_back(items[i]);
     items.erase(items.begin()+i);
     next = k;
     }
  else{
    i += 1;
   }
   }
return dead;
 }
