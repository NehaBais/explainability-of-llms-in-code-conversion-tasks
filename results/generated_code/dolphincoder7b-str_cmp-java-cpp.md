Below is the C++ equivalent of the Java code provided above, with only minor syntax adjustments due to differences between the two languages. In this case, we are mainly concerned with string comparisons and how they're handled in different contexts: exact equality, lexical comparison (order), case sensitivity etc. The following programme demonstrates these concepts:
```cpp
#include <iostream>  // Include the input/output stream library
#include <locale>   // Include the locale library for case insensitive comparisons
using namespace std; 

int main() {
    string A = "Hello"; 
    string B = "Hello"; 

    if (A == B) 
        cout << "'" << A << "' and '" << B << "' are lexically equal." << endl; 
    else
        cout << "'" << A << "' and '" << B << "' are not lexically equal." << endl;

    // Case insensitive comparison
    bool eq = false;
    if (locale("C").operator()<char, char>(A.begin(), A.end(), B.begin(), B.end())) 
        cout << "'" << A << "' and '" << B << "' are not case-insensitive lexically equal." << endl; 
    else
        cout << "'" << A << "' and '" << B << "' are case-insensitive lexically equal." << endl;

    // Lexical comparison
    if (A < B) 
        cout << "'" << A << "' is lexically before '" << B << "'." << endl; 
    else if (B < A)
        cout << "'" << A << "' is lexically after '" << B << "'." << endl; 

    // Using a lambda function for lexical comparison
    eq = true;
    auto cmp = [&](string s1, string s2){ return s1.compare(s2); }; 
    if (cmp(A,B) <= 0) 
        cout << "'" << A << "' is not lexically before '" << B << "'." << endl; 
    else
        cout << "'" << A << "' is not lexically after '" << B << "'." << endl;

    // Using locale for case insensitive comparison
    eq = false;
    auto icmp = [&](string s1, string s2){ return locale("C").operator()<char, char>(s1.begin(), s1.end(), s2.begin(), s2.end()); }; 
    if (icmp(A,B)) 
        cout << "'" << A << "' is not case-insensitive lexically before '" << B << "'." << endl; 
    else
        cout << "'" << A << "' is not case-insensitive lexically after '" << B << "'." << endl;

    // Using lambda function for lexical comparison with different strings
    string C = "5"; 
    string D = "5.0"; 
    if (cmp(C,D) < 0) 
        cout << "'" << C << "' is lexically before '" << D << "'." << endl; 
    else
        cout << "'" << C << "' is lexically after '" << D << "'." << endl;

    // Using locale for case insensitive comparison with different strings
    eq = false;
    if (locale("C").operator()<char, char>(C.begin(), C.end(), D.begin(), D.end())) 
        cout << "'" << C << "' is not case-insensitive lexically before '" << D << "'." << endl; 
    else
        cout << "'" << C << "' is not case-insensitive lexically after '" << D << "'." << endl;

    // Using locale for case insensitive comparison with different strings
    string E = "java"; 
    string F = "Java"; 

    if (locale("C").operator()<char, char>(E.begin(), E.end(), F.begin(), F.end())) 
        cout << "'" << E << "' is not case-insensitive lexically before '" << F << "'." << endl; 
    else
        cout << "'" << E << "' is not case-insensitive lexically after '" << F << "'." << endl;

    // Using locale for case insensitive comparison with different strings
    string G = "ĴÃVÁ"; 
    string H = "ĵãvá"; 

    if (locale("C").operator()<char, char>(G.begin(), G.end(), H.begin(), H.end())) 
        cout << "'" << G << "' is not case-insensitive lexically before '" << H << "'." << endl; 
    else
        cout << "'" << G << "' is not case-insensitive lexically after '" << H << "'." << endl;

    // Checking the lexical relationship as a result of comparison
    eq = true;
    int lex = cmp(A,B); 
    if (lex < 0) 
        cout << "The lexical relationship is: less than." << endl; 
    else if (lex > 0)
        cout << "The lexical relationship is: greater than." << endl; 
    else
        cout << "The lexical relationship is: equal to." << endl; 

    // Checking the case-insensitive lexical relationship as a result of comparison
    eq = false;
    int icmpLex = locale("C").operator()<char, char>(A.begin(), A.end(), B.begin(), B.end()); 
    if (icmpLex < 0) 
        cout << "The case-insensitive lexical relationship is: less than." << endl; 
    else if (icmpLex > 0)
        cout << "The case-insensitive lexical relationship is: greater than." << endl; 
    else
        cout << "The case-insensitive lexical relationship is: equal to." << endl; 

    return 0; 
}
```
