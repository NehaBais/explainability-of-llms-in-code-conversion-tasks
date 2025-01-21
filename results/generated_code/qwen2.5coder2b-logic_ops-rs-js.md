Sure! Below is the equivalent JavaScript code for the given Rust function:

```javascript
function booleanOps(a, b) {
    console.log(`${a} and ${b} -> ${a && b}`);
    console.log(`${a} or ${b} -> ${a || b}`);
    console.log(`${a} xor ${b} -> ${a ^ b}`);
    console.log(`not ${a} -> ${!a}`);
}

function main() {
    booleanOps(true, true);
    booleanOps(true, false);
    booleanOps(false, true);
    booleanOps(false, false);
}
```

### Explanation:
1. **Function Definition**: The JavaScript function `booleanOps` takes two parameters, `a` and `b`, which are the logical values to be evaluated.
2. **Logarithms**: 
   - `console.log(`${a} and ${b} -> ${a && b}`): This prints "a and b -> a && b", where `a && b` is the result of the `&&` operator in JavaScript.
   - `console.log(`${a} or ${b} -> ${a || b}`): This prints "a or b -> a || b".
   - `console.log(`${a} xor ${b} -> ${a ^ b}`): This prints "a xor b -> a ^ b", where `a ^ b` is the result of the `^` operator in JavaScript.
   - `console.log(`not ${a} -> ${!a}`): This prints "not a -> !a", where `!a` is the result of the logical NOT operator in JavaScript.
3. **Main Function**: The `main` function calls `booleanOps` with different pairs of boolean values and logs the results.

This code will output the expected results for each pair of boolean values provided in the `main` function.
