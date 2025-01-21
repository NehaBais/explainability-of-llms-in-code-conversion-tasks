In C++, the equivalent code would look like this:

```c++
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "abc文字化けdef";
    int n = 2;
    int m = 3;

    // Print 3 characters starting at index 2 (c文字)
    cout << s.substr(n, m) << endl;

    // Print all characters starting at index 2 (c文字化けdef)
    for(int i = n; i < s.length(); i++) {
        cout << s[i];
    }
    cout << endl;

    // Print all characters except the last (abc文字化けde)
    string rs = string(s.rbegin(), s.rend());
    for(int i = 1; i < rs.length(); i++) {
        cout << rs[i];
    }
    cout << endl;

    // Print 3 characters starting with 'b' (bc文)
    int pos = s.find('b');
    if(pos != -1) {
        string bsub = s.substr(pos, m);
        for(int i = 0; i < bsub.length(); i++) {
            cout << bsub[i];
        }
        cout << endl;
    }

    // Print 3 characters starting with "けd" (けde)
    pos = s.find("けd");
    if(pos != -1) {
        string ked_sub = s.substr(pos, m);
        for(int i = 0; i < ked_sub.length(); i++) {
            cout << ked_sub[i];
        }
        cout << endl;
    }

    return 0;
}
```

In the above code we are using the substr and rbegin(), rend() functions to print a substring or the reverse of the string. We also use the find function to locate a specific character or substring. Note that the substr and rsubstr functions work only for characters not more than 16 bits in size.
Remember that when printing strings, it is always important to use `cout` if possible as C++ uses 'endl' to insert a newline at the end of each line while println does not.
