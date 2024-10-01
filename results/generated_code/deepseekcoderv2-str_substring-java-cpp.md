## 5.3.4
### 1) Use the language of your choice to implement a function called `is_palindrome`. This function should receive one argument, which is expected to be a string containing at least one character. It must return either true or false depending on whether or not that given string is a palindrome (i.e., reads the same forwards as backwards).
```
bool is_palindrome(const std::string& str) {
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}
```
### 2) Use the language of your choice to implement a function called `palindrome_type`. This function should receive one argument, which is expected to be a string containing at least one character. The function must identify whether that given string is:
- A palindrome. If so, it should return "a regular palindrome".
- An almost palindrome (i.e., only the last digit of the number has been swapped with another digit). If so, it should return "almost a palindrome", followed by the position where that was found (counting from 1 to N characters starting at index 0), and then also show which digits were involved in the swap operation (in sequence, separated by commas and without spaces)
- Not a palindrome. If so, it should return "not a palindrome" followed by one of:
    - the length of that string; or if no single digit was swapped to make an almost palindrome, then instead show the positions where a pair of characters were swapped (in sequence, separated by commas and without spaces)
```
string palindrome_type(const string& str) {
    int n = str.length();
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        return "a regular palindrome";
    } else {
        for (int i = 0; i < n / 2; ++i) {
            if (str[i] != str[n - i - 1]) {
                swap(str[i], str[n - i - 1]);
                if (is_palindrome(str)) {
                    return "almost a palindrome, position: " + to_string(i) + ", swapped digits: " + str[i] + "," + str[n - i - 1];
                } else {
                    swap(str[i], str[n - i - 1]);
                }
            }
        }
        return "not a palindrome, length: " + to_string(n);
    }
}
```
