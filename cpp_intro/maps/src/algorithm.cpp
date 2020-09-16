#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <limits>
#include <stdexcept>
#include <iomanip>

using namespace std;

void testcase() {
    int q; cin >> q;
    int a;
    string b;
    multimap<string,int> m;

    for(int i = 0; i < q; i++){
        cin >> a;
        cin >> b;

        if(a > 0){
            m.insert(make_pair(b,a));
        }else{
            m.erase(b);
        }
    }

    string s; cin >> s;
    if(m.find(s) == m.end()){
        cout << "Empty" << endl;
    } else {
        set<int> my_set;
        for (multimap<string,int>::iterator it = m.equal_range(s).first; it != m.equal_range(s).second; ++it)
             my_set.insert(it->second);
        
        for (auto it = my_set.begin(); it != my_set.end(); ++it) 
            cout << *it << " ";
        cout << endl;
    }

}

int main() {
    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t; 
    for (int i = 0; i < t; ++i)
        testcase(); 
}
