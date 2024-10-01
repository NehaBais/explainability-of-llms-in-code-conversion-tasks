Sure! Here's the JavaScript equivalent of the Rust code you provided:
```
const a = "abc";
let b = "Bac";

// Comparing two strings for exact equality
if (a === b) {
  console.log("The strings are equal");
}

// Comparing two strings for inequality (i.e., the inverse of exact equality)
if (a !== b) {
  console.log("The strings are not equal");
}

// Comparing two strings to see if one is lexically ordered before than the other
if (a < b) {
  console.log("The first string is lexically after the second");
}

// Comparing two strings to see if one is lexically ordered after than the other
if (a > b) {
  console.log("The first string is lexically before the second");
}

// How to achieve both case sensitive and case insensitive comparisons within the language
// Case-sensitive comparison:
if (a === b) {
  console.log("Both strings are equal when ignoring case");
}

// Case-insensitive comparison:
let a2 = a.toUpperCase();
let b2 = b.toUpperCase();
if (a2 === b2) {
  console.log("Both strings are equal when ignoring case");
}

// How the language handles comparison of numeric strings if these are not treated lexically
// Numeric strings can be compared numerically, but they must first be converted to numbers using parseInt() or parseFloat() functions.
```
Note that in JavaScript, you don't need to use the `std::ascii::AsciiExt` trait like in Rust, since it is not necessary for string comparison. Instead, you can simply use the built-in `==` and `!=` operators to compare strings lexically, and you can also use the `String.prototype.toUpperCase()` method to convert a string to its uppercase equivalent.
