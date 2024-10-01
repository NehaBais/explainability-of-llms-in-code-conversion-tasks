This is the equivalent JavaScript code:
```javascript
var s = 'World';
s = 'Hello' + s;
console.log(s);
```
In JavaScript, there are no mutable strings like in Rust. Therefore, `let mut` cannot be used here because you cannot modify a string in place. The equivalent is to create a new variable `s2` that is the concatenation of the two strings and then overwrite `s`. Here's how it would look like:

var s1 = 'Hello';
var s2 = 'World';
var s3 = s1 + s2;
console.log(s3);

This results in `Hello World` being printed to the console.
