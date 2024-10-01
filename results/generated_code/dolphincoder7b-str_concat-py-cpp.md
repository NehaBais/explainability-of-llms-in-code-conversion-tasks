Below is the equivalent C++ code:
```cpp
#include<iostream>
#include<string>
using namespace std;
int main() {
    string s1 = "hello";
    cout << s1 + " world" << endl;
    
    string s2 = s1 + " world";
    cout << s2 << endl;

    s1 = "hello";
    cout << ", ".join([s1, "world", "mom"]) << endl;

    string s2 = ", ".join([s1, "world", "mom"]);
    cout << s2 << endl;
    
    return 0;
}
```
Note: The C++ function join is a part of the standard library, so it doesn't need to be implemented manually. Furthermore, we're using string concatenation instead of + for joining strings, as it's more efficient and easier to read. Here's how this C++ code works:

1. We create two strings (s1 and s2) with initial values of "hello".
2. The first print statement concatenates the values of both strings and prints the result.
3. The second print statement prints the value of string s2, which is equal to the concatenation of s1 and " world".
4. We then change the value of s1 to "hello" again for the next two operations.
5. For the third print statement, we use string's member function join() to concatenate s1, "world", and "mom". The argument passed to join() is a list of strings.
6. The fourth print statement prints the value of s2, which is equal to the result of join().
7. We exit the program after executing all statements.
Note: This code assumes that you have a function named ", ".join() or similar available, which takes an array of strings and returns their concatenation separated by commas and spaces. If you don't have such a function available, then you can use the following alternative code to implement string join operation using "+" operator:

    // Implementing join function in C++
    string join(vector<string> v) {
        string result = "";
        for (int i = 0; i < v.size() - 1; i++)
            result += v[i] + ", ";
        
        return result + v[v.size() - 1];
    }
