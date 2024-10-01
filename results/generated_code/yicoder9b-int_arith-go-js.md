In JavaScript:

```javascript
let a = parseInt(prompt('enter two integers: '));
let b = parseInt(prompt());
alert(`${a} + ${b} = ${a+b}`);
alert(`${a} - ${b} = ${a-b}`);
alert(`${a} * ${b} = ${a*b}`);
alert(`${a} / ${b} = ${Math.trunc(a/b)}`); // truncates towards 0
alert(`${a} % ${b} = ${a%b}`);  // same sign as first operand
```
Note: 

- JavaScript does not have a built in exponentiation operator (`**`) so you'll need to use `Math.pow()` function for this operation.
- JavaScript uses `alert` and `prompt` instead of `fmt.Print` and `fmt.Scanln` respectively. 
- The remainder operator always has the same sign as the dividend, not the divisor. This can be tested with negative numbers.
