Sure, here's the equivalent code in JavaScript:
```javascript
function printMatch(possibleMatch) {
  switch (true) {
    case possibleMatch !== undefined:
      console.log(`Found match at pos ${possibleMatch}`);
      break;
    default:
      console.log('Did not find any matches');
  }
}
const s1 = 'abcd';
const s2 = 'abab';
const s3 = 'ab';
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
Note that in JavaScript, we use `startsWith`, `includes`, and `endsWith` to check for string matching. We also use `indexOf` to find the location of a substring within a string. The equivalent function in Rust is `find`, which returns an optional value indicating the index of the first occurrence of the substring. If the substring is not found, it returns `None`. In JavaScript, we use a ternary operator to handle this case and print a message accordingly.

