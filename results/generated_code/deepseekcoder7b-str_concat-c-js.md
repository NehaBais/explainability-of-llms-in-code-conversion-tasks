Here is the equivalent JavaScript code for your C program. It will do all of the same operations:

```javascript
function sConcat(s1, s2) {
    return s1 + s2;
}

let s = "hello";
console.log(s);                     // or console.log(`${s} literal`);
console.log(sconcat(s, " literal")); //or console.log(`${s}literal`);

```

The function `sConcat()` is equivalent to your C's `sconcat()` that concatenates two strings together. The JavaScript version does not require malloc or free because the memory management in JavaScript is automatic and garbage collected. Instead of allocating a new string for s1+s2, it will create a new one if necessary. 

This code also assumes there's no need to store concatenated values into separate variables; instead, you immediately log them to console as needed. If that's not the case and you want to hold onto the result of concatenation for later use, simply assign it to a variable in its place. For instance:

let s = "hello";
console.log(`${s} literal`);  // log original string + "literal"
let s2 = sConcat(s, " literal");
console.log(s2); // logs the concatenated value of s and " literal"

