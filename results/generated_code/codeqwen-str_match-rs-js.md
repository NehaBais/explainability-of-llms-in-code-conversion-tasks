Here is how you can convert the given Rust code to JavaScript:

```javascript
function printMatch(possibleMatch) {
    if (possibleMatch === -1) {
        console.log("Did not find any matches");
    } else {
        console.log("Found match at pos " + possibleMatch);
    }
}

function main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";

    // Determining if the first string starts with second string
    console.assert(s1.startsWith(s3), 'The first string does not start with the second string');
    // Determining if the first string contains the second string at any location
    console.assert(s1.includes(s3), 'The first string does not contain the second string');
    // Print the location of the match
    printMatch(s1.indexOf(s3)); // Found match at pos 0
    printMatch(s1.indexOf(s2)); // Did not find any matches
    // Determining if the first string ends with the second string
    console.assert(s2.endsWith(s3), 'The first string does not end with the second string');
}

main();
```
In JavaScript, you can use `String.startsWith()`, `String.includes()` and `String.indexOf()` to determine if a string starts with another string, contains it at any location or ends with it respectively. The `indexOf()` method returns the index of the first occurrence of a specified value in a given string. If the value is not found, `indexOf()` returns -1.

Also, JavaScript has `console.assert()` for assertions (i.e., conditionals that should hold true). It will throw an error if the assertion fails and the provided message as a second argument.
