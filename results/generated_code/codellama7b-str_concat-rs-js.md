Sure! Here's the JavaScript code:

```javascript
let s = "hello";
console.log(s);

let s1 = s + " world";
console.log(s1);
```

In Rust, the `to_owned()` method is used to convert a string into an owned string, which means that it creates a copy of the string on the heap and returns a reference to it. In JavaScript, there is no need for this step because strings are immutable by default and can be created directly from a literal.

In the second line, we assign the value of `s` to `s1`, which is the concatenation of `s` with another string literal " world". We use the plus operator (+) to concatenate the two strings together. In JavaScript, we can simply add the two strings together using the plus operator.

The output of both lines will be:

hello
helloworld
