Here is the equivalent JavaScript code:

```javascript
let s1 = "hello";
console.log(s1 + " world");

let s2 = s1 + " world";
console.log(s2);

s1 = "hello";
console.log(", ".concat(s1, "world", "mom"));

s2 = ", ".concat(s1, "world", "mom");
console.log(s2);
```

In JavaScript, we use the `let` keyword to declare variables. We can concatenate strings using the `+` operator or the `concat()` method. The `join()` method is used to join all elements of an array into a string with a specified separator.
