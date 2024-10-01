```javascript
// JavaScript string comparison operators:
let c = "cat";
let d = "dog";
if (c === d) {
    console.log(c + " is bytewise identical to " + d);
}
if (c !== d) {
    console.log(c + " is bytewise different from " + d);
}
if (c > d) {
    console.log(c + " is lexically bytewise greater than " + d);
}
if (c < d) {
    console.log(c + " is lexically bytewise less than " + d);
}
if (c >= d) {
    console.log(c + " is lexically bytewise greater than or equal to " + d);
}
if (c <= d) {
    console.log(c + " is lexically bytewise less than or equal to " + d);
}
// JavaScript is strongly typed and will not directly compare a value of string
// type to a value of numeric type.
// A case insensitive compare can be done with a function in the strings
// package in the standard library:
let eqf = `when interpreted as UTF-8 and compared under Unicode
simple case folding rules.`;
if (c.toLowerCase() === d.toLowerCase()) {
    console.log(c + " equal to " + d + " " + eqf);
} else {
    console.log(c + " not equal to " + d + " " + eqf);
}
// JavaScript is strongly typed and will not directly compare a value of string
// type to a value of numeric type.
```
