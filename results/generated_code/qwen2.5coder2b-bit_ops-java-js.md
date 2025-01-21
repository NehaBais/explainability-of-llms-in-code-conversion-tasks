Sure, here is the JavaScript equivalent of your Java code:

```javascript
function bitwise(a, b) {
  console.log(`a AND b: ${a & b}`);
  console.log(`a OR b: ${a | b}`);
  console.log(`a XOR b: ${a ^ b}`);
  console.log(`NOT a: ~${a}`);
  console.log(`a << b: ${a << b}`); // left shift
  console.log(`a >> b: ${a >> b}`); // arithmetic right shift
  console.log(`a >>> b: ${a >>> b}`); // logical right shift
  console.log(`a rol b: ${Math.imul(a, Math.pow(2, b))}`); // rotate left, JavaScript 1.5+
  console.log(`a ror b: ${Math.imul(Math.pow(2, b), a)}`); // rotate right, JavaScript 1.5+
}
```
Please note that this is for JavaScript version which doesn't support bitwise operators or shift operations natively. So I used `Math.imul` which performs an integer multiplication in JavaScript, and then used bit shifting based on the exponent of `2`.
