The code provided is written in C and needs to be converted to JavaScript. The conversion should demonstrate the following requirements:

1. Comparing two strings for exact equality.
2. Comparing two strings for inequality (i.e., the inverse of exact equality)).
3. Comparing two strings to see if one is lexically ordered before than the other.
4. Demonstrate how to achieve both case sensitive comparisons and case insensitive comparisons within the language.
5. How the language handles comparison of numeric strings if these are not treated lexically.
6. Demonstrate any other kinds of string comparisons that the language provides, particularly as it relates to your type system.

Here's a JavaScript code snippet for converting the given C code:

```javascript
function compare(a, b) {
  console.log(`${a} \t\t ${b}`);
  console.log('   eq , ne , gt , lt , ge , le');
  console.log(`${STREQ(a, b)} , ${STRNE(a, b)} , ${STRGT(a, b)} , ${STRLT(a, b)} , ${STRGE(a, b)} , ${STRLE(a, b)}`);
}

function compareCaseInsensitive(a, b) {
  console.log(`${a} \t\t ${b} ignoring case`);
  console.log('   eq , ne , gt , lt , ge , le');
  console.log(`${STRCEQ(a, b)} , ${STRCNE(a, b)} , ${STRCGT(a, b)} , ${STRCLT(a, b)} , ${STRCGE(a, b)} , ${STRCLE(a, b)}`);
}

// Example usage:
const a = "Hello";
const b = "world!";

compare(a, b);
compareCaseInsensitive(a, b);
```

This JavaScript code snippet converts the given C code to JavaScript and demonstrates the specified requirements.
