In JavaScript, you can achieve this by using the `String.prototype.concat` method or the template literals. Here are two ways to do this:

Method 1: Using the `concat` method.
```javascript
let s = "World";
s = "Hello ".concat(s);
console.log(s);
```

Method 2: Using template literals.

let s = "World";
s = `Hello ${s}`;
console.log(s);

Both of these JavaScript snippets will output `"Hello World"` to the console.
