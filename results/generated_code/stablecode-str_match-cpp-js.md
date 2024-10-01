Here is your C++ code converted to JavaScript:

JavaScript:
```javascript
let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

function startsWith(str, searchString) {
    return str.indexOf(searchString) === 0;
}

function contains(str, searchString) {
    return str.includes(searchString);
}

function endsWith(str, searchString) {
    let pos = str.lastIndexOf(searchString));
    return (pos !== -1) && (pos === str.length()-searchString.length());
}

// Testing the functions 
console.log("Starts with: " + startsWith(s1, s3)));
console.log("Contains: " + contains(s1, s2)));
console.log("Ends with: " + endsWith(s1, s3))));
```
Please note that JavaScript uses zero-based indexing, so the indexOf and lastIndexOf functions start counting from 0 instead of 1. Thus, the return values in your C++ code need to be adjusted accordingly for a proper translation.
