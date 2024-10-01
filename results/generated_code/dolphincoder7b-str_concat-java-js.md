This is how you can convert the given Java code to JavaScript:

```javascript
let s = "hello";
console.log(s + " literal");
let s2 = s + " literal";
console.log(s2);
```

Here's the breakdown of what it does:

1. `let` is used instead of `var`, as this is a modern way to declare variables in JavaScript, especially for ES6 and above.
2. The variable `s` is assigned a string value.
3. `console.log(s + " literal")` outputs the concatenation of the string `s` with the string literal `" literal"`. In this case, it will output `"hello literal"`.
4. The variable `s2` is also assigned to the same value as `s`, but with the addition of the string literal `" literal"`, so it is effectively the concatenation of both variables `s` and `literal`.
5. The final `console.log(s2)` outputs this new concatenated string, which will print `"hello literal"`.
