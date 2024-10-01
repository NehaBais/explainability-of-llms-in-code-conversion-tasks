Here is the equivalent JavaScript code:

```javascript
function compare(a, b){
    console.log(`
%r is of type %r and %r is of type %r`, a, typeof a, b, typeof b));

  if (a <  b) {
      console.log('%r is strictly less than  %r', a, b))
  }
  if (a <= b) {
      console.log('%r is less than or equal to %r', a, b))
  }
  if (a >  b) {
      console.log('%r is strictly greater than  %r', a, b))
  }
  if (a >= b) {
      console.log('%r is greater than or equal to %r', a, b))
  }
  if (a == b) {
      console.log('%r is equal to %r', a, b))
  }
  if (a != b) {
      console.log('%r is not equal to %r', a, b))
  }
  if (a === b) {
      console.log('%r has object identity with %r', a, b))
  }
  if (a !== b) {
    console.log('%r has negated object identity with %r', a, b));
  }
}

compare('YUP', 'YUP');
compare('BALL', 'BELL');
compare('24', '123');
compare(24, 123);
compare(5.0, 5);
```
This JavaScript code does exactly the same as your Python code. It takes two arguments a and b, and then performs several different comparisons using if statements. The console logs are used to print out the results of these comparisons.
