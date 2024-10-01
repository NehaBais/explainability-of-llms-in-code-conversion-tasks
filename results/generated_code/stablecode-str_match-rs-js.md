Here is the equivalent JavaScript code:

```javascript
function printMatch(possibleMatch) {
  if (possibleMatch !== undefined) {
    console.log(`Found match at pos ${possibleMatch}`);
  } else {
    console.log('Did not find any matches');
  }
}

const s1 = "abcd";
const s2 = "abab";
const s3 = "ab";

// Determining if the first string starts with second string
if (s1.startsWith(s3))) {
    console.log('Match found');
} else {
    console.log('No match found');
}

// Determining if the first string contains the second string at any location
if (s1.includes(s3)))) {
    console.log('Match found');
} else {
    console.log('No match found');
}

// Print the location of the match 
printMatch(s1.indexOf(s3))); // Found match at pos 0
printMatch(s1.indexOf(s2)) === -1 ? println!("Did not find any matches") : println!("Found match at pos {}", s1.indexOf(s2)))); 
// Determining if the first string ends with the second string
if (s2.endsWith(s3)))) {
    console.log('Match found');
} else {
    console.log('No match found');
}
```
Please note that JavaScript does not have built-in support for assertions like Rust, therefore it is not translated exactly from Rust to JavaScript but rather a way to handle the result of each function call and print out the appropriate message based on whether or not a match was found.
