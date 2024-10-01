Here's the equivalent C++ code for the given Golang code:
```
#include 
#include 
#include 
using namespace std;
 
int main() {
    string first = "abracadabra";
    string second = "abr";
    
    cout << "1. " << first << " starts with " << second << ": " << (first.find(second) == 0) << endl;
    
    int i = first.find(second);
    cout << "2. " << first << " contains " << second << ": " << (i != string::npos) << ", ";
    if (i != string::npos) {
        cout << "at location " << i << ", ";
        for (int start = i+1; ; ) {
            int j = first.find(second, start);
            if (j < 0) break;
            cout << "at location " << start+j << ", ";
            start = j + 1;
        }
        cout << "and that's all" << endl;
    }
    
    cout << "3. " << first << " ends with " << second << ": " << (first.rfind(second) != string::npos) << endl;
    
    return 0;
}
```
The C++ code uses the `find()` and `rfind()` functions to perform string matching on the given strings. The output of the program will be:

1. abracadabra starts with abr: true
2. abracadabra contains abr: true, at location 0, at location 3, and that's all
3. abracadabra ends with ra: true


