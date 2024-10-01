Here's the converted code from Rust to JavaScript that demonstrates the three types of string matching as required:
```
function printMatch(possibleMatch) {
  if (possibleMatch !== null && possibleMatch !== undefined) {
    console.log(`Found match at pos ${possibleMatch}`);
  } else {
    console.log("Did not find any matches");
  }
}
const s1 = "abcd";
const s2 = "abab";
const s3 = "ab";
// Determining if the first string starts with second string
console.assert(s1.startsWith(s3));
// Determining if the first string contains the second string at any location
console.assert(s1.includes(s3));
// Print the location of the match 
printMatch(s1.indexOf(s3)); // Found match at pos 0
printMatch(s1.indexOf(s2)); // Did not find any matches
// Determining if the first string ends with the second string
console.assert(s2.endsWith(s3));
```
Note that in JavaScript, the `includes()` method is used instead of `contains()`, and the `indexOf()` method returns -1 if the substring is not found, whereas Rust's `find()` method returns an `Option` type that can be either a `Some` value containing the index of the match or `None` if there is no match.

