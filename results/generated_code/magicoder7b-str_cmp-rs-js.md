 JavaScript does not have the same strict type system and comparison rules of Rust, so we need to adjust our concepts a bit when converting. Here's how you would write this code in JavaScript:

```javascript
function main() {
    let a = "abc";
    let b = "Bac";

    // Strings are coerced to primitive types when compared
    if (a == b) { console.log("The strings are equal") }
    if (a != b) { console.log("The strings are not equal") }
    if (a  > b) { console.log("The first string is lexically after the second") }
    if (a  < b) { console.log("The first string is lexically before the second") }
    // JavaScript does not have separate operators for less than or equal to, just use the > and < checks

    // Case-insensitives:

    // equality
    // here we need to convert both strings to the same case
    if (a.toUpperCase() == b.toUpperCase()) { console.log("Both strings are equal when ignoring case") }
}
```

JavaScript's type system is less strict than Rust's, so it can compare two different types of variables as long as one or both can be coerced to a primitive (string, number, boolean), or if they implement certain methods. JavaScript also does not distinguish between upper and lower case letters, which means "Bac" would be considered equal to "abc".

JavaScript also handles numeric string comparison differently than Rust: if two strings can't be converted to the same type for a comparison (like comparing "123" with 123), JavaScript compares them as strings.
