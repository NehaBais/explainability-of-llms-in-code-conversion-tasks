Here is the equivalent JavaScript code for your Rust code. I'm using `padStart()` to pad out the binary representation of the numbers so that they line up nicely.

```javascript
let A = 105;
let b = 91;

console.log('a      = '.padStart(10, '0') + A.toString(2));
console.log('b      = '.padStart(10, '0') + b.toString(2));
console.log('A | B  = '.padStart(10, '0') + (A | b).toString(2));
console.log('A & B  = '.padStart(10, '0') + (A & b).toString(2));
console.log('A ^ B  = '.padStart(10, '0') + (A ^ b).toString(2));
console.log('!A     = '.padStart(10, '0') + (!A >>> 0).toString(2));
console.log('A << 3 = '.padStart(10, '0') + (A << 3).toString(2));
console.log('A >> 3 = '.padStart(10, '0') + (A >> 3).toString(2));

// Note: In JavaScript, shifting to the right is done using ">>>" and not ">>". This is because it uses zero-fill shift.
```

This will print out the binary representations of your variables A and B with leading zeros so that they line up nicely. 

The `toString(2)` function in JavaScript converts a number into a binary string. The `>>> 0` at the end is used to perform an unsigned right shift, which ensures that any leading bits beyond the bit-length of the number are removed, preventing incorrect behavior with negative numbers.
