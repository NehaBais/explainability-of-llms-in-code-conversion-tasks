The equivalent code in JavaScript would be:

```javascript
function compare(a, b) {
  console.log("
  typeof a === '%s', typeof b === '%s'", typeof a, typeof b);
  if (a < b) {
    console.log('%r is strictly less than %r', a, b);
  } else if (a <= b) { 
    console.log('%r is less than or equal to %r', a, b);
  } else {
    console.log("No strict comparison for %r and %r", a, b);
  }
  if (a > b) {
    console.log('%r is strictly greater than %r', a, b);
  } else if (a >= b) { 
    console.log('%r is greater than or equal to %r', a, b);
  } else {
    console.log("No strict comparison for %r and %r", a, b);
  }
  if (a == b) {
    console.log('%r is equal to %r', a, b);
  } else {
    console.log('%r is not equal to %r', a, b);
  }
  if (a != b) {
    console.log('%r is not equal to %r', a, b);
  } else {
    console.log("Both %r and %r are equal", a, b);
  }
  if (a === b) {
    console.log('%r has object identity with %r', a, b);
  } else if (a !== b) {
    console.log('%r does not have object identity with %r', a, b);
  } else {
    console.log("No object identity comparison for %r and %r", a, b);
  }
}
compare('YUP', 'YUP');
compare('BALL', 'BELL');
compare('24', '123');
compare(24, 123);
compare(5.0, 5);
```
