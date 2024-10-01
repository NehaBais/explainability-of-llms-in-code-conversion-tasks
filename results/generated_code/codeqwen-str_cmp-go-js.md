The JavaScript equivalent of the given Golang code is as follows:

```javascript
let c = "cat";
let d = "dog";

if(c === d) {
    console.log(c, "is bytewise identical to", d);
}

if(c !== d) {
    console.log(c, "is bytewise different from", d);
}

if(c > d) {
    console.log(c, "is lexically bytewise greater than", d);
}

if(c < d) {
    console.log(c, "is lexically bytewise less than", d);
}

if(c >= d) {
    console.log(c, "is lexically bytewise greater than or equal to", d);
}

if(c <= d) {
    console.log(c, "is lexically bytewise less than or equal to", d);
}

// JavaScript is case-sensitive by default and does not have a built-in function for doing case insensitive comparisons
let eqf = `when interpreted as UTF-8 and compared under Unicode
simple case folding rules.`;

if(c === d) {
    console.log(c, "equal to", d, eqf);
} else {
    console.log(c, "not equal to", d, eqf);
}
```

Please note that JavaScript does not have direct comparison operators for strings of different types. In JavaScript, all comparisons are done bytewise and if you want a lexical comparison (i.e., comparing as strings rather than numbers) or a case-insensitive comparison, you will need to use built-in functions or external libraries.
