Here's the JavaScript version of your C code:

```javascript
function print_logic(A, b) {
    console.log("A and b is " + (A && b));
    console.log("A or b is " + (A || b));
    console.log("not a is " + !A);
}
```

This JavaScript function takes two logical values, A and b, as arguments and prints the result of their "and", "or" operations as well as their "not" operation on the first argument. The '&&' operator in JavaScript performs logical AND operation, '||' performs logical OR operation and '!' is the logical NOT operator.
