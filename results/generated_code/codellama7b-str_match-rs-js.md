Sure! Here's the converted code in JavaScript:
```js
const s1 = "abcd";
const s2 = "abab";
const s3 = "ab";

// Determining if the first string starts with second string
console.log(s1.startsWith(s3)); // true
// Determining if the first string contains the second string at any location
console.log(s1.includes(s3)); // true
// Print the location of the match
const matchPos = s1.indexOf(s3);
if (matchPos !== -1) {
  console.log(`Found match at pos ${matchPos}`);
} else {
  console.log("Did not find any matches");
}

// Determining if the first string ends with the second string
console.log(s2.endsWith(s3)); // true
```
Note that in JavaScript, we don't have a direct equivalent of Rust's `Option<usize>` type, so we just use the built-in `null` or `undefined` values to represent "no match" (i.e., when the `indexOf` method returns `-1`).
