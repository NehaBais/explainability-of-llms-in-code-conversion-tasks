 Sure, here is the conversion of the given Python code to JavaScript:

```javascript
// Determining if the first string starts with the second string
let str1 = "abcd";
let str2 = "ab";
console.log(str1.startsWith(str2)); // returns True

// Determining if the first string ends with the second string
let str3 = "zn";
console.log(str1.endsWith(str3)); // returns False

// Determining if the first string contains the second string at any location
let str4 = "abab";
let substr1 = "bb";
console.log(str4.includes(substr1)); // returns False

let substr2 = "ab";
console.log(str4.includes(substr2)); // returns True

// Handling multiple occurrences of a string for part 2 and finding the location
let loc1 = str4.indexOf(substr1); // returns -1
let loc2 = str4.indexOf(substr2); // returns 0
if (loc2 !== -1) {
    let nextLoc = str4.indexOf(substr2, loc2 + 1); // returns 2
    console.log(nextLoc);
} else {
    console.log("Substring not found");
}
```

This JavaScript code performs the same operations as the provided Python code:
1. Determines if one string starts with another string.
2. Determines if one string ends with another string.
3. Checks if one string contains another string at any location, and handles multiple occurrences by finding subsequent locations.
