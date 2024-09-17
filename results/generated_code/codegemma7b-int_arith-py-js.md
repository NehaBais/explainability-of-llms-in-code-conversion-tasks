```javascript
const input1 = parseInt(prompt("Enter first integer: "));
const input2 = parseInt(prompt("Enter second integer: "));

const qq = input1 + input2;
console.log(`Sum: 		  ${qq}`);

const ww = input1 - input2;
console.log(`Difference: 	  ${ww}`);

const ee = input1 * input2;
console.log(`Product: 	  ${ee}`);

const rr = Math.floor(input1 / input2);
console.log(`Integer quotient: ${rr}`);

const floatQuotient = input1 / input2;
console.log(`Float quotient:   ${floatQuotient}`);

const tt = input1 / input2;
const uu = Math.round((tt - Math.floor(tt)) * 10);
console.log(`Whole Remainder:  ${int(uu)}`);
console.log(`Actual Remainder: ${uu}`);

const yy = Math.pow(input1, input2);
console.log(`Exponentiation:   ${yy}`);
```

**Note:**

- `parseInt()` is used to convert user input to integers.
- `Math.floor()` is used for integer quotient.
- `Math.round()` is used for whole remainder.
- `Math.pow()` is used for exponentiation.
