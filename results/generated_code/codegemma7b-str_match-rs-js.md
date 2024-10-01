```javascript
function printMatch(possibleMatch) {
    if (possibleMatch !== null) {
        console.log(`Found match at pos ${possibleMatch}`);
    } else {
        console.log('Did not find any matches');
    }
}

const s1 = 'abcd';
const s2 = 'abab';
const s3 = 'ab';

// Determining if the first string starts with the second string
console.assert(s1.startsWith(s3));

// Determining if the first string contains the second string at any location
console.assert(s1.includes(s3));

// Print the location of the match
console.log(printMatch(s1.indexOf(s3))); // Found match at pos 0
console.log(printMatch(s1.indexOf(s2))); // Did not find any matches

// Determining if the first string ends with the second string
console.assert(s2.endsWith(s3));
```

**Explanation:**

* The `startsWith()` method checks if the first string starts with the second string.
* The `includes()` method checks if the first string contains the second string at any location.
* The `indexOf()` method returns the position of the first occurrence of the second string in the first string.
* The `printMatch()` function prints the location of the match if it exists or a message indicating no match.
* The code handles multiple occurrences of the second string by calling `indexOf()` repeatedly.
