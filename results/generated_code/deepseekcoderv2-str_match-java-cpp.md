### Solution
#### Part 1: Determining if the first string starts with second string
We can use function `startsWith()` to solve this part. The syntax for it is as follows:
```c++
string s;
s.starts_with(substring);
```
In C++, we define a variable of type `std::string` and call the member functions of the object using dot notation (i.e., `stringVar.functionName()`). The function returns boolean value true if string starts with substring otherwise false. This can be used to check whether string starts with given string or not.
#### Part 2: Determining if the first string contains the second string at any location
This part is a bit tricky because we need to find all occurrences of the search string and return their positions. The function `find()` in C++ returns -1 when substring is not found, otherwise it returns position at which substring occurs for the first time in the original string after the specified index (starting with 0). If startIndex is greater than or equal to length(), find() will never cause an exception and return npos.
#### Part 3: Determining if the first string ends with second string
This part can be solved by calling `endsWith()` function on original string object, which returns true if last character of this sequence matches given argument else false.
