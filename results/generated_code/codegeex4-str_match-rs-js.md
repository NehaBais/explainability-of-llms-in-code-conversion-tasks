Here is your converted JavaScript code:

```javascript
function printMatch(possibleMatch) {
    if (possibleMatch !== -1) {
        console.log("Found match at pos " + possibleMatch);
    } else {
        console.log("Did not find any matches");
    }
}

(function main() {
    var s1 = "abcd";
    var s2 = "abab";
    var s3 = "ab";

    // Determining if the first string starts with second string
    console.assert(s1.startsWith(s3) === true, 's1 does not start with s3');
    // Determining if the first string contains the second string at any location
    console.assert(s1.includes(s3) === true, 's1 does not include s3');
    // Print the location of the match 
    printMatch(s1.indexOf(s3)); // Found match at pos 0
    printMatch(s1.indexOf(s2)); // Did not find any matches
    // Determining if the first string ends with the second string
    console.assert(s2.endsWith(s3) === true, 's2 does not end with s3');
})();
```
Please note that in JavaScript, the `startsWith`, `includes` and `endsWith` functions are used to check if a string starts with another string, contains another string or ends with another string respectively. Similarly, the `indexOf` function can be used to find the position of an occurrence within a string. If the substring is not found, it returns `-1`.
