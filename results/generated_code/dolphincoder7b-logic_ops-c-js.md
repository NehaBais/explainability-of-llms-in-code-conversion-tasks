This code has been successfully converted to JavaScript. Here's the translated version of your code:
```javascript
function print_logic(a, b) {
    console.log(`a and b is ${a && b}`);
    console.log(`a or b is ${a || b}`);
    console.log(`not a is ${!a}`);
}
```
Now you can call this function with any two logical values (either 0 or 1) to get the results of "and", "or" and "not".
Please note that JavaScript uses `===` for strict equality checks, so `print_logic(true, false)` will return `false`, not `true`. In C/C++, you can use `==` which is a non-strict version of the equality operator.
