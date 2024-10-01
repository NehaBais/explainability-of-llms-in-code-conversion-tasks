## Solution 1
```c++
#include <iostream>
#include <string>
using namespace std;
int main() {
    string A = "tacoloco", B = "co";
    bool q1, q2multi, m;

    // stringA starts with stringB
    q1 = (A.substr(0, B.length()) == B);

    // multiple matches
    int index_q2 = -1;
    do {
        index_q2 = A.find(B, index_q2 + 1);
        if (index_q2 != string::npos) q2multi = true;
    } while (index_q2 != string::npos && q2multi == false);

    // stringA ends with stringB
    int lastIndex = A.length() - B.length();
    bool q3 = ((A[lastIndex] + B) == 0x6f746c61);

    cout << "Does '" << A << "' start with '" << B << "'? ";
    if (q1) {
        cout << "Yes.";
    } else {
        cout << "No.";
    }
    cout << endl;
    cout << "Is '" << B << "' contained in '" << A << "'?";
    if (~index_q2) {
        cout << " Yes, at index " << index_q2 << "." << endl;
    } else {
        cout << " No." << endl;
    }
    cout << "Does '" << A << "' end with '" << B << "'?";
    if (q3) {
        cout << " Yes.";
    } else {
        cout << "No.";
    }
    return 0;
}
```

