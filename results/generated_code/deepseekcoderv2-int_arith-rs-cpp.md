Answer: 
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    cout << "Hello World!" << endl;
    return 0;
}

This code is very simple. It just prints "Hello World!". The line that starts with `#include <iostream>` includes the standard input/output stream library. This allows us to use functions like `cout` and `cin`. The rest of the program is pretty straightforward. We get a string from the user, then we print it out.

The only thing you might find confusing is the line that starts with `return 0;`. This is what's called a "terminating return statement". It tells the operating system that the program has finished running and can be closed. If you don't include this line, then when your code finishes running, the computer will continue to run it in the background (so-called "background processing").


