int start = a.at(a.size() - 1);
int end = b[0];

vector<int> first;
vector<int> final;

for (int j = start; j <= end; j+=start) {
    first.push_back(j);
    for (auto i: a) {
        if (j % i != 0) {
            first.pop_back();
            break;
        }
    }
}

if(!first.empty()){
    for (auto i:first) {
        final.push_back(i);
        for (auto j:b) {
            if (j%i != 0){
                final.pop_back();
                break;
                }
            }
        }
   return static_cast<int>(final.size()); 
}    
return 0;