Here is the equivalent JavaScript code:

```javascript
function booleanOps(A, b) {
    console.log(`${A} and ${b} -> ${A && b}`);
    console.log(`${A} or ${b} -> ${A || b}`);
    console.log(`${A} xor ${b} -> ${A ^ b}`);
    console.log(`not ${A} -> ${!A}`);
}

booleanOps(true, true);
booleanOps(true, false);
booleanOps(false, true);
booleanOps(false, false);
```
This script will print out the result of "and", "or" and "xor" operations on two arguments as well as "not" operation on the first argument. The `${}` syntax used in console logs allows us to insert variables into our log messages dynamically.
