
### JavaScript Solution:
```javascript
function printMatch(possibleMatch) {
  if (possibleMatch !== null) {
    console.log("Found match at pos " + possibleMatch);
  } else {
    console.log("Did not find any matches");
  }
}

let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Determining if the first string starts with second string
assert(s1.startsWith(s3));
// Determining if the first string contains the second string at any location
assert(s1.includes(s3));
// Print the location of the match 
printMatch(s1.indexOf(s3)); // Found match at pos 0
printMatch(s1.indexOf(s2)); // Did not find any matches
// Determining if the first string ends with the second string
assert(s2.endsWith(s3));
```
