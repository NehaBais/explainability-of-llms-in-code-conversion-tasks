 Sure, here's the equivalent JavaScript code for your Java requirements:

```javascript
// Determining if the first string starts with the second string
function startsWith(str, prefix) {
    return str.startsWith(prefix);
}

// Determining if the first string contains the second string at any location
function contains(str, substring) {
    return str.includes(substring);
}

// Determining if the first string ends with the second string
function endsWith(str, suffix) {
    return str.endsWith(suffix);
}

// Optional requirements:
// 1. Print the location of the match for part 2
function indexOf(str, searchValue, fromIndex = 0) {
    const index = str.indexOf(searchValue, fromIndex);
    if (index !== -1) {
        console.log(`Location of "${searchValue}" in "${str}":`, index);
    } else {
        console.log(`"${searchValue}" not found in "${str}".`);
    }
    return index;
}

// Test cases
console.log(startsWith("abcd", "ab")); // returns true
console.log(endsWith("abcd", "zn")); // returns false
console.log(contains("abab", "bb")); // returns false
console.log(contains("abab", "ab")); // returns true
let loc = indexOf("abab", "bb"); // returns -1
loc = indexOf("abab", "ab"); // returns 0
loc = indexOf("abab", "ab", loc + 1); // returns 2
```

This JavaScript code mirrors the functionality of your Java code. It includes functions to check if a string starts with, contains, or ends with another string, and it handles multiple occurrences by printing the location of the match for part 2.
