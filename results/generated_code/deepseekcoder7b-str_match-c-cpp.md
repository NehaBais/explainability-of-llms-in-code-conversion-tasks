Your code is already in C++. It includes the necessary functions for determining if one string starts with another (`startsWith()`), ends with another (`endsWith()`), and contains another (`doesContain()`). If you want to make it more complex, e.g., providing the location of a match in `doesContain()`, that can be achieved by using `std::string::find()` which returns the position of first occurrence of the searched string or `std::string::npos` if no such occurrence is found. 

Here's an example:
```cpp
#include <iostream>
#include <string>
using namespace std;

bool startsWith(const string& container, const string& target) {
    return container.find(target) == 0;
}

bool endsWith(const string& container, const string& target) {
    return container.rfind(target) == (container.length() - target.length());
}

size_t doesContain(const string& container, const string& target) {
    size_t pos = container.find(target);
    if(pos != string::npos){
        return pos;  // returns the position of first occurrence
    } else{
        return string::npos;  
    }
}

int main() {
    cout << "Starts with Test ( Hello,Hell ) : " << startsWith("Hello","Hell")<<endl;
    cout << "Ends with Test ( Code,ode ) : " << endsWith("Code","ode")<<endl;
    size_t pos = doesContain("Google,msn", "msn"); 
    if(pos != string::npos) {
        cout << "Contains Test: Match found at position: "<< pos << endl;  
    } else{
       cout <<"Contains Test : No match found!"<<endl; 
    }    
}
```
In this code, `startsWith()` uses the find function of string to check if container starts with target. It returns true when it finds a match at position 0 (i.e., beginning of the string).

Similarly, `endsWith()` uses rfind which finds the last occurrence of given substring in the string, and compares it's result with length of the string minus its own length to check if it ends there. It returns true when it finds a match at such position.

For `doesContain()` , find function is used that gives us position of first occurrence of target within container. If no such occurrence found, npos (maximum value size_t can store) is returned by string::find(). 

Please note that the doesContain function returns a size_t variable not bool to return location of match in case it exists. We are using C++ standard library `string` class methods here which provides us these features out of box.

