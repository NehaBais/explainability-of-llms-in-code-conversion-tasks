 Here's the equivalent JavaScript code for the given Rust code:

```javascript
let s = "hello".repeat(1).trim(); // Using repeat() to simulate to_owned() and trim() to remove any whitespace
console.log(s);

let s1 = s + " world";
console.log(s1);
```

In this JavaScript code:
- `"hello".repeat(1)` is used to create a string that repeats the word "hello" once, similar to Rust's `to_owned()`.
- `.trim()` removes any whitespace from the repeated string, although in this specific case it doesn't affect the result since "hello" has no trailing or leading spaces.
