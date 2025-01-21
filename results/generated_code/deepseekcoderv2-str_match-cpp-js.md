 Sure! Here is the equivalent JavaScript code for the given C++ code:

```javascript
let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Beginning
s1.startsWith(s3); // true

// End
if (s1.length >= s3.length) {
    let endIndex = s1.length - s3.length;
    s1.endsWith(s3); // true
} else {
    console.log("EndsWith check failed: string length mismatch");
}

// Anywhere
let loc = s2.indexOf(s3); // returns -1
if (loc !== -1) {
    console.log("First occurrence at index:", loc);
}

let prevLoc = -1;
while ((loc = s2.indexOf(s3, prevLoc + 1)) !== -1) {
    console.log("Occurrence at index:", loc);
    prevLoc = loc;
}
```

### Explanation:
1. **Beginning**: The `startsWith` method in JavaScript checks if the string starts with the specified substring.
2. **End**: The `endsWith` method in JavaScript checks if the string ends with the specified substring. We need to ensure that `s3` is not longer than `s1`.
3. **Anywhere**: The `indexOf` method in JavaScript returns the index of the first occurrence of the substring, or `-1` if it is not found. If found, we print the location. To find all occurrences, we use a loop with `indexOf` starting from the last found position plus one.

This JavaScript code should provide similar functionality to the C++ code you provided.
