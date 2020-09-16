#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <numeric>
#include <limits>
#include <stdexcept>
#include <iomanip>

using namespace std;

void testcase() {
    int q; cin >> q;
    set<int> s;
    int a, b;

    for(int i = 0; i < q; i++){
        cin >> a;
        cin >> b;

        if(a)
            s.erase(b);
        else
            s.insert(b);
    }

    if(s.size() == 0)
        cout << "Empty" << endl;
    else{
        for(int const& e : s){
            cout << e << " ";
        }
        cout << endl;
    }

    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t; 
    for (int i = 0; i < t; ++i)
        testcase(); 
}
