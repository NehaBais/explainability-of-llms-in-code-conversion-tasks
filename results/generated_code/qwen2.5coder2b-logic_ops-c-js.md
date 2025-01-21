The equivalent code in JavaScript would be:

```javascript
function print_logic(a, b) {
  console.log(a && b); // Returns true if both arguments are truthy, otherwise false
  console.log(a || b); // Returns true if either argument is truthy, otherwise false
  console.log(!a); // Returns the opposite of the argument (true if false, false if true)
}
```

Please note that JavaScript uses `||` and `&&` instead of `or` and `and`, respectively. Also in JavaScript, booleans are represented as `true` or `false`, not 1 or 0.
