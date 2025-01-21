 Here's the equivalent JavaScript code for the provided Rust code:

```javascript
function printMatch(possibleMatch) {
    if (possibleMatch !== null) {
        console.log(`Found match at pos ${possibleMatch}`);
    } else {
        console.log("Did not find any matches");
    }
}

let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Determining if the first string starts with second string
if (s1.startsWith(s3)) {
    console.log("The first string starts with the second string");
} else {
    console.log("The first string does not start with the second string");
}

// Determining if the first string contains the second string at any location
if (s1.includes(s3)) {
    console.log("The first string contains the second string");
    // Print the location of the match 
    let index = s1.indexOf(s3);
    printMatch(index); // Found match at pos 0
} else {
    console.log("The first string does not contain the second string");
}

// Handle multiple occurrences of a string for part 2
let indices = [];
let index = s1.indexOf(s3);
while (index !== -1) {
    indices.push(index);
    index = s1.indexOf(s3, index + 1);
}
if (indices.length > 0) {
    console.log(`Found matches at positions: ${indices}`);
} else {
    console.log("The first string does not contain the second string");
}

// Determining if the first string ends with the second string
if (s2.endsWith(s3)) {
    console.log("The first string ends with the second string");
} else {
    console.log("The first string does not end with the second string");
}
```

This JavaScript code performs the same operations as the Rust code:
1. Checks if `s1` starts with `s3`.
2. Checks if `s1` contains `s3` at any location, and prints the position of the match.
3. Handles multiple occurrences by finding all positions where `s3` occurs in `s1`.
4. Checks if `s2` ends with `s3`.
