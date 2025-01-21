Sure, here is the JavaScript equivalent of your Java code:

```javascript

// Determine if the first string starts with second string
functionstartsWith(str, substr) {
    return str.startsWith(substr);
}

// Determine if the first string contains the second string at any location
function contains(str, substr) {
    return str.includes(substr);
}

// Determine if the first string ends with the second string
function endsWith(str, substr) {
    return str.endsWith(substr);
}

// Example usage:
console.log(startsWith("abcd", "ab")); //returns true
console.log(endsWith("abcd", "zn")); //returns false
console.log(contains("abab", "bb")); //returns false
console.log(contains("abab", "ab")); //returns true
let loc = "abab".indexOf("bb"); 
console.log(loc); //returns -1
loc = "abab".indexOf("bb"); 
console.log(loc); //returns 0
loc = "abab".indexOf("ab", loc+1); //returns 2
```

The `startsWith`, `endsWith` and `includes` methods in JavaScript do exactly the same thing as `startsWith`, `endsWith`, and `contains` methods in Java. The `indexOf` method returns the index of the first occurrence of a substring, or `-1` if it is not found.
