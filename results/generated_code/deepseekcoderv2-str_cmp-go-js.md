 Sure! Below is the equivalent JavaScript code that performs the same tasks as described in your Golang code:

```javascript
// JavaScript string comparison operators:
let c = "cat";
let d = "dog";
if (c === d) {
    console.log(`${c} is bytewise identical to ${d}`);
}
if (c !== d) {
    console.log(`${c} is bytewise different from ${d}`);
}
if (c > d) {
    console.log(`${c} is lexically bytewise greater than ${d}`);
}
if (c < d) {
    console.log(`${c} is lexically bytewise less than ${d}`);
}
if (c >= d) {
    console.log(`${c} is lexically bytewise greater than or equal to ${d}`);
}
if (c <= d) {
    console.log(`${c} is lexically bytewise less than or equal to ${d}`);
}

// JavaScript can perform case insensitive comparisons using the `localeCompare` method:
let eqf = "when interpreted as UTF-8 and compared under Unicode simple case folding rules.";
if (c.localeCompare(d, undefined, { sensitivity: 'base' }) === 0) {
    console.log(`${c} equal to ${d} ${eqf}`);
} else {
    console.log(`${c} not equal to ${d} ${eqf}`);
}
```

### Explanation:
1. **Comparing two strings for exact equality (`===`) and inequality (`!==`):**
   - JavaScript uses the strict equality operator `===` and its negation `!==` for bytewise comparison.
   
2. **Comparing two strings to see if one is lexically ordered before or after the other:**
   - JavaScript uses the lexicographical comparison operators `<`, `>`, `<=`, and `>=`.

3. **Case insensitive comparisons using `localeCompare`:**
   - The `localeCompare` method in JavaScript can be used with the `sensitivity` option set to 'base' for case-insensitive comparison. This is similar to Go's `strings.EqualFold`.

4. **Handling numeric strings:**
   - In JavaScript, if you compare a string that represents a number directly to another string that represents a number, it will use lexical order based on the character codes of the characters in the strings. For example, "10" is considered less than "2" because "1" comes before "2" in lexicographical order.

This JavaScript code should provide similar functionality and output as your original Go code.
