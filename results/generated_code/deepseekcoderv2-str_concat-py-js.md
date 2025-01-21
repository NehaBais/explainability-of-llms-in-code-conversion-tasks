 Here's the equivalent code in JavaScript:

```javascript
let s1 = "hello";
console.log(s1 + " world");

let s2 = s1 + " world";
console.log(s2);

s1 = "hello";
console.log(", ".join([s1, "world", "mom"]));

s2 = ", ".join([s1, "world", "mom"]);
console.log(s2);
```

In JavaScript, string concatenation and array manipulation are done similarly to Python. The `+` operator is used for concatenation, and the `join` method is used to concatenate elements of an array into a single string with a specified separator (in this case, ", ").
