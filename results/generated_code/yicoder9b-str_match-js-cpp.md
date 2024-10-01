Here is the C++ version of your JavaScript code:

```c++
#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    string stringA = "tacoloco";
    string stringB = "co";
    bool q1, q3;
    int q2;
    smatch m;  // match results
    vector<size_t> q2matches;

    // stringA starts with stringB
    q1 = (stringA.substr(0, stringB.length()) == stringB);

    // stringA contains stringB
    q2 = stringA.find(stringB); 

    // multiple matches
    regex q2multi(stringB);
    while(regex_search(stringA, m, q2multi)){
        q2matches.push_back(m.position());
        stringA = m.suffix();  // continue the search with the remaining string
    }

    // stringA ends with stringB
    q3 = (stringA.substr(stringA.length() - stringB.length()) == stringB);

    cout << "1: Does '"<<stringA<<"' start with '"<<stringB<<"'? "  << ( q1 ? "Yes." : "No.") << endl;
    if(q2 != string::npos){
        cout << "2: Is '"<<stringB<<"' contained in '"<<stringA<<"'? Yes, at index "<< q2 <<".";
        if (q2matches.size() > 1) {
            cout << " In fact, it happens "<<q2matches.size()<<" times within '"<<stringA<<"', at indexes ";
            for(int i=0; i< q2matches.size(); i++) cout << q2matches[i] << ((i < q2matches.size()-1) ? ", ":".\n");
        } else {cout<<endl;}   // if there is only one match or no matches at all
    } else{
        cout << "2: Is '"<<stringB<<"' contained in '"<<stringA<<"'? No." << endl;
    } 
    cout << "3: Does '"<<stringA<<"' end with '"<<stringB<<"'? "  << ( q3 ? "Yes." : "No.") << endl;

    return 0;
}
```
