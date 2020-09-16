#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>
#include <stdexcept>
#include <iomanip>

using namespace std;

void testcase() {
    
    int n; cin >> n;
    vector<int> v;

    int c;

    for(int i = 0; i < n; i++){
        cin >> c;
        v.push_back(c);
    }

    int remove_idx; cin >> remove_idx;
    int remove_start, remove_end; cin >> remove_start; cin >> remove_end;

    v.erase(v.begin()+remove_idx);
    v.erase(v.begin()+remove_start, v.begin()+remove_end+1);

    if(v.size() == 0){
        cout << "Empty" << endl;
    } else {
        for(int k = 0; k < v.size(); k++)
            cout << v[k] << " ";
        cout << endl;
    }





    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t; 
    for (int i = 0; i < t; ++i)
        testcase(); 
}
