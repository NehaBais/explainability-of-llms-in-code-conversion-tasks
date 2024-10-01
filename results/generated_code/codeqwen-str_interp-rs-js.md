In JavaScript, you can use template literals (backticks) and the string interpolation feature to achieve similar result. Here's an equivalent example in JavaScript:

```javascript
console.log(`Mary had a ${"little"} lamb`); // You can specify order
console.log(`${"Mary"} had a ${"little"} lamb`);  // Or named arguments if you prefer
``` 

Both of these JavaScript examples will output "Mary had a little lamb". 

Template literals are a way to embed expressions inside string literals, using curly braces `{}`. The embedded expression is evaluated at runtime and can be any valid JavaScript expression. The result is a new string with the interpolated value.
