Here is how you can convert the given C++ code to JavaScript:

```javascript
let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Beginning
s1.startsWith(s3);

// End
s1.endsWith(s3);

// Anywhere
s1.indexOf(s2) !== -1;

let loc = s2.indexOf(s3); // returns 0

while (loc !== -1) {
    console.log(loc);
    loc = s2.indexOf(s3, loc + 1);
}
```

In JavaScript, we use the `startsWith()`, `endsWith()` and `indexOf()` methods to check if a string starts with another string, ends with another string, or contains another string respectively. The `indexOf()` method also returns -1 when the substring is not found in the main string.

The code for finding all occurrences of a substring is implemented using a while loop and increments the start index by 1 after each match is found, ensuring that overlapping occurrences are also considered.
