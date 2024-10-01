### Pseudocode:

SUBSTRING(s: string of characters, n: integer, m: integer):
    if n < 0 or m < 0:
        return NULL
    k = 1
    for i from 0 to length(s) - 1 do
        if s[i] is not the null character:
            if k == n:
                break
            else:
                k += 1
    if k != n + 1:
        return NULL
    if m < 0:
        m = length(s) - i
    result = new string of length m
    for j from 0 to m - 1 do
        result[j] = s[i+j]
    return result


### Code
```cpp
#include<bits/stdc++.h>
using namespace std;
 
string substring(string s, int n, int m) {
    if (n < 0 || m < 0)
        return "";
    
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != '\0') {
            if (++n == 0)
                break;
        }
    }
    
    if (n + 1 != s.length())
        return "";
        
    if (m < 0)
        m = s.size() - i;
        
    string res = "";
    for (int j = 0; j < m; ++j) {
        res += s[i+j];
    }
    
    return res;
}
 
string str_wholeless1(string s) {
    return substring(s, 0, s.size()-1);
}

string str_fromch(string s, char ch, int m) {
    string temp = "";
    for (int i=0;i<s.length();++i)
        if (s[i] == ch)
            break;
        
    return substring(s, i, m);
}
 
string str_fromstr(string s, string in, int m) {
    string temp = "";
    for (int i=0;i<s.length();++i)
        if (s.substr(i,in.length()) == in)
            break;
        
    return substring(s, i, m);
}
 
int main() {
    string s = "hello world shortest program";
    
    cout << substring(s, 12, 5) << endl;    // get "short"
    cout << substring(s, 6, -1) << endl;     // get "world shortest program"
    cout << str_wholeless1(s) << endl;         // "hello worl... progra"
    cout << str_fromch(s, 'w', 5) << endl;     // "world"
    cout << str_fromstr(s, "ro", 3) << endl;   // "rog"
    
    return 0;
}
```
