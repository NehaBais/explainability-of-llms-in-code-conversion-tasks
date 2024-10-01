Here is the C++ version of your Go code:

```C++
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void match(const string& first, const string& second) {
    bool starts_with = (first.find(second) == 0);
    cout << "1. " << first << " starts with " << second << ": " << starts_with << endl;

    size_t found = first.find(second);
    if (found != string::npos){
        cout << "2. " << first << " contains " << second << ": true," << endl;
        cout << "   at location: " << found << endl;
        for(size_t start = found + 1;;){
            if ((found = first.find(second,start)) == string::npos) {
                break;  
            }
            cout << "   and at location: " << found << endl;
            start = found + 1;    
        }
         cout << "   And that's all" << endl;
    } else{
       cout << "2. " << first << " contains " << second << ": false,"<<endl;  
    }
     bool ends_with = (first.rfind(second) == (first.length() - second.length()));
     cout << "3. " << first << " ends with " << second << ": " << ends_with << endl;
}
int main(){
    match("abracadabra", "abr");
    return 0;
}
```
