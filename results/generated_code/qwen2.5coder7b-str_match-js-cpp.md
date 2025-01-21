Here is a C++ version of the JavaScript code:

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string stringA = "tacoloco";
    string stringB = "co";

    bool q1 = stringA.substr(0, stringB.length()) == stringB;
    int q2 = stringA.find(stringB);
    
    vector<int> q2matches;
    while(q2 != string::npos){
        q2matches.push_back(q2);
        q2 = stringA.find(stringB, q2+1);
    }
    
    bool q3 = stringA.substr(stringA.length() - stringB.length()) == stringB;

    cout << "1: Does '" << stringA << "' start with '" << stringB << "'? " 
         << (q1 ? "Yes." : "No.") << endl;
    if (~q2 && !q2matches.empty()){
        cout << "2: Is '" << stringB << "' contained in '" << stringA << "'? Yes, at index " << q2 << ".\n";
        if(q2matches.size() > 1){
            cout << "   In fact, it happens " << q2matches.size() << " times within '" 
                 << stringA << "', at indices " << q2matches[0];
            for(int i = 1; i < q2matches.size(); i++)
                cout << ", " << q2matches[i];
            cout << "." << endl;
        }
    } else
        cout << "2: Is '" << stringB << "' contained in '" << stringA << "'? No." << endl;
    
    cout << "3: Does '" << stringA << "' end with '" << stringB << "'? "
         << (q3 ? "Yes." : "No.") << endl;

    return 0;
}
```
In this C++ code, we use the substr and find methods from the string class to achieve the same results as in JavaScript's substring, indexOf, and lastIndexof methods. For multiple matches, a while loop is used until all occurrences are found. The location of each match is stored in a vector, and printed if there are more than one occurrence.
