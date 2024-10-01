Sure, I can help you with that! Here's the converted code in JavaScript:
```
// Go language string comparison operators:
const c = 'cat';
const d = 'dog';
if (c === d) {
  console.log(c, 'is bytewise identical to', d);
}
if (c !== d) {
  console.log(c, 'is bytewise different from', d);
}
if (c > d) {
  console.log(c, 'is lexically bytewise greater than', d);
}
if (c < d) {
  console.log(c, 'is lexically bytewise less than', d);
}
if (c >= d) {
  console.log(c, 'is lexically bytewise greater than or equal to', d);
}
if (c <= d) {
  console.log(c, 'is lexically bytewise less than or equal to', d);
}

// Go is strongly typed and will not directly compare a value of string
// type to a value of numeric type.

// A case insensitive compare can be done with a function in the strings
// package in the Go standard library:
const eqf = `when interpreted as UTF-8 and compared under Unicode
simple case folding rules.`;
if (c.toLowerCase() === d.toLowerCase()) {
  console.log(c, 'equal to', d, eqf);
} else {
  console.log(c, 'not equal to', d, eqf);
}

// Seeing that the built in operators work bytewise and the library
// case folding functions interpret UTF-8, you might then ask about
// other equality and inequality tests that interpret UTF-8.
// Functions for this are not in the Go standard library but are in
// the Go "sub repository" at golang.org/x/text.  There is support
// for Unicode normalization, collation tables, and locale sensitive
// comparisons.
```
In JavaScript, we can use the `===` operator for exact equality comparison of strings, and the `!==` operator for inequality comparison. We can also use the `<`, `>`, `<=`, and `>=` operators to perform lexical ordering comparisons.

For case insensitive comparison, we can use the `toLowerCase()` method on the string object to convert both strings to lowercase before comparing them.

Note that JavaScript does not have a built-in type for representing text as UTF-8 encoded bytes, so we cannot directly compare strings as bytes in JavaScript. However, we can use the `String.prototype.toLowerCase()` method to perform case insensitive comparison of strings.
