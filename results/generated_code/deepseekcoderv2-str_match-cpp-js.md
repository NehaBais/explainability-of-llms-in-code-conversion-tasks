### Solution

#### C++

#include <iostream>
using namespace std;

string s1 = "abcd";
string s2 = "abab";
string s3 = "ab";

bool startsWith(const string& str, const string& prefix) {
    return str.compare(0, prefix.size(), prefix) == 0;
}

bool containsAtAnyLocation(const string& str, const string& substring) {
    size_t pos = str.find(substring);
    return (pos != string::npos);
}

bool endsWith(const string& str, const string& suffix) {
    return str.compare(str.size() - suffix.size(), suffix.size(), suffix) == 0;
}

int main() {
    cout << boolalpha;
    
    // Part 1: Check if the first string starts with the second string
    cout << "Part 1: StartsWith\n";
    cout << startsWith(s1, s3) << endl;
    cout << "\nPart 2: ContainsAtAnyLocation\n";
    bool contains = containsAtAnyLocation(s1, s2);
    cout << contains << endl;
    if (contains) {
        size_t pos = s1.find(s3);
        while (pos != string::npos) {
            cout << "Match found at position: " << pos << endl;
            pos = s1.find(s3, pos + 1);
        }
    } else {
        cout << "No match found." << endl;
    }
    
    // Part 3: Check if the first string ends with the second string
    cout << "\nPart 3: EndsWith\n";
    cout << endsWith(s1, s3) << endl;
    
    return 0;
}


#### JavaScript
```js
let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

function startsWith(str, prefix) {
  return str.slice(0, prefix.length) === prefix;
}

function containsAtAnyLocation(str, substring) {
  return str.indexOf(substring) !== -1;
}

function endsWith(str, suffix) {
  return str.slice(-suffix.length) === suffix;
}

console.log("Part 1: StartsWith");
console.log(startsWith(s1, s3));

console.log("\nPart 2: ContainsAtAnyLocation");
let contains = containsAtAnyLocation(s1, s2);
console.log(contains);
if (contains) {
  let pos = s1.indexOf(s3);
  while (pos !== -1) {
    console.log("Match found at position:", pos);
    pos = s1.indexOf(s3, pos + 1);
  }
} else {
  console.log("No match found.");
}

console.log("\nPart 3: EndsWith");
console.log(endsWith(s1, s3));
```
