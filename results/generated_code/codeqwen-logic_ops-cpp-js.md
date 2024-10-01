Here's the JavaScript version of your C++ code:

```javascript
function print_logic(A, b) {
  console.log('A and b is ' + (A && b));
  console.log('A or b is ' + (A || b));
  console.log('not a is ' + (!A));
}
```

This function does exactly the same thing as your C++ code: it takes two boolean arguments `A` and `b`, and outputs the results of "and" and "or" on both arguments as well as "not" on the first argument. The difference is that JavaScript uses `console.log()` for outputting to the console, and doesn't require a semicolon at the end of each line like C++ does. Also, in JavaScript boolean values are printed as true or false, not 1 or 0, so `std::boolalpha` isn't necessary here.
