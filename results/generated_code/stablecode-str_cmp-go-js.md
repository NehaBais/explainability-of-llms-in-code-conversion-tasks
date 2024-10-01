Here's the equivalent JavaScript code:

```javascript
// JavaScript string comparison operators:
let c = "cat";
let d = "dog";
if (c === d) {
    console.log(c, "is identical to", d));
}
if (c !== d) {
    console.log(c, "is different from", d));
}
if (c > d) {
    console.log(c, "is lexically greater than", d));
}
if (c < d) {
    console.log(c, "is lexically less than", d));
}
if (c >= d) {
    console.log(c, "is lexically greater than or equal to", d));
}
if (c <= d) {
    console.log(c, "is lexically less than or equal to", d));
}

// JavaScript has case sensitive comparisons by default
let e = "Cat";
if (e === "cat") {
    console.log("The comparison is case sensitive");
} else {
    console.log("The comparison is not case sensitive");
}
```
Note that in JavaScript, the `===` operator checks both value and type equality. The `==` operator checks for equivalence only (i.e., matching values and types). 

Also, JavaScript supports a number of ways to compare strings while ignoring case differences or locale-specific rules for string comparison. These methods are typically accessed through functions provided by the JavaScript standard library.
