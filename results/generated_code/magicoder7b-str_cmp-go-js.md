 In JavaScript, we can use built-in methods to compare two strings based on the requirements mentioned in the Golang code. Here's how it would look:

```javascript
let c = "cat";
let d = "dog";

if (c === d) {
    console.log(c, 'is identical to', d);
}
if (c !== d) {
    console.log(c, 'is different from', d);
}
if (c > d) {
    console.log(c, 'is lexically greater than', d);
}
if (c < d) {
    console.log(c, 'is lexically less than', d);
}
if (c >= d) {
    console.log(c, 'is lexically greater than or equal to', d);
}
if (c <= d) {
    console.log(c, 'is lexically less than or equal to', d);
}

// For case insensitive comparison
if (c.toLowerCase() === d.toLowerCase()) {
    console.log(c, 'is identical to', d + ` when interpreted as UTF-8 and compared under Unicode simple case folding rules.`);
} else {
    console.log(c, 'is not identical to', d + ` when interpreted as UTF-8 and compared under Unicode simple case folding rules.`);
}
```
