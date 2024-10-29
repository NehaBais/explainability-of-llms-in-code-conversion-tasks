In JavaScript you can use `String.prototype.concat()` method or template literals to prepend a string to another one. The equivalent of your Rust code would be:

```javascript
let s = "World";
s = "Hello ".concat(s);
console.log(s);
```

Or using ES6 Template Literal syntax you can write:

let s = "World";
s = `Hello ${s}`;
console.log(s);

