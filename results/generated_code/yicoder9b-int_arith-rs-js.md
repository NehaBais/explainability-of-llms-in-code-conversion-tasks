The JavaScript equivalent of the given Rust code is as follows. Notice that JS doesn't have an exact equivalent to Rust's `parse::<i32>()` method for converting strings to integers, so we use the `parseInt()` function instead: 

```javascript
var args = process.argv.slice(2);

let a = parseInt(args[0]);
let b = parseInt(args[1]);

console.log('sum:', a + b);
console.log('difference:', a - b);
console.log('product:', a * b);
// In JavaScript, the quotient always truncates towards zero as in Rust
console.log('integer quotient:', Math.trunc(a / b)); 
console.log('remainder:', a % b); // same sign as first operand
```
