I have implemented a JavaScript version of your Rust code. This should be roughly equivalent to your original requirements, but the syntax is different and has some limitations in comparison to the Rust version.

Here's how you can use it:

```javascript
function printMatch(possibleMatch) {
    if (typeof possibleMatch === 'number') {
        console.log(`Found match at pos ${possibleMatch}`);
    } else {
        console.log('Did not find any matches');
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
printMatch(s1.indexOf(s3));  // Found match at pos 0
printMatch(s1.indexOf(s2));  // Did not find any matches

// Determining if the first string ends with the second string
console.assert(s2.endsWith(s3));
```

Please note that there are a few differences between JavaScript and Rust:

1. In JavaScript, `contains` is equivalent to `includes`, but they have different behavior when searching for substrings. In Rust, `contains` returns true if the substring exists anywhere in the string (including at the start or end), while `includes` only checks for exact matches.
2. The method names are also different: in JavaScript, `startWith` is used for this operation, whereas in Rust it's named `starts_with`.
3. There is no direct equivalent to `find`, so instead you can use `indexOf` which will return the index of the first occurrence or -1 if not found.
4. `assert` in JavaScript does not have the same behavior as the `assert!` keyword in Rust. Instead, it simply evaluates its argument and throws a `TypeError` if the argument is falsey. In this case, `console.assert(s1.includes(s3))` will throw an error when the assertion fails (as s1 does not contain s3), while `console.assert(s2.endsWith(s3))` will pass without throwing any errors.

If you have any more questions or need help with something else, feel free to ask!
