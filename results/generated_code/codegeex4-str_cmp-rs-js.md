```javascript
// JavaScript doesn't have built-in ASCII methods. We have to manually implement them.

function asciiEq(a, b) {
  return a.toLowerCase() === b.toLowerCase();
}

function asciiNeq(a, b) {
  return a.toLowerCase() !== b.toLowerCase();
}

function asciiLt(a, b) {
  return a.toLowerCase().localeCompare(b.toLowerCase()) < 0;
}

function asciiGt(a, b) {
  return a.toLowerCase().localeCompare(b.toLowerCase()) > 0;
}

function asciiLe(a, b) {
  return a.toLowerCase().localeCompare(b.toLowerCase()) <= 0;
}

function asciiGe(a, b) {
  return a.toLowerCase().localeCompare(b.toLowerCase()) >= 0;
}

// demonstration
let a = "abc";
let b = "Bac";

console.log(asciiEq(a, b));   // true when ignoring case
console.log(asciiNeq(a, b));  // false when ignoring case

console.log(a < b);           // true when considering ASCII values directly
console.log(a > b);           // false when considering ASCII values directly
console.log(a <= b);          // true when considering ASCII values directly
console.log(a >= b);          // false when considering ASCII values directly

// If you want to compare two numeric strings, you can't just use string comparison.
// You need to convert them into numbers first.

function strCompareNumeric(a, b) {
  let num1 = Number(a);
  let num2 = Number(b);

  if (isNaN(num1) || isNaN(num2)) {
    throw new Error("Both inputs must be numeric strings");
  }

  return num1 - num2;
}

console.log(strCompareNumeric('3', '5')); // negative value because '3' < '5'
console.log(strCompareNumeric('7', '4')); // positive value because '7' > '4'
console.log(strCompareNumeric('7', '7')); // 0 because the values are equal
```
