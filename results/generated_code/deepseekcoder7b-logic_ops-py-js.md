Here is how you can write the equivalent JavaScript code for your Python function:

```javascript
function logic(a, b) {
    console.log("a and b:", a && b);
    console.log("a or b:", a || b);
    console.log("not a:", !a);
}
```
In JavaScript, you can use `&&` operator for logical AND operation and it returns the last evaluated argument if all arguments are truthy otherwise it returns false.
Similarly, JavaScript provides `||` operator which return first true value among its operands or the last one if no true values found. 
Finally, to get a boolean that is logically negated you can use `!` operator in JavaScript. It gives true for false and false for true.

