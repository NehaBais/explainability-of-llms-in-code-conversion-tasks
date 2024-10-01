Sure! Here's the JavaScript code that implements the same functionality as the Python code:
```javascript
function compare(a, b) {
  console.log("%r is of type %r and %r is of type %r", a, typeof a, b, typeof b);
  if (a < b) {
    console.log('%r is strictly less than  %r', a, b);
  }
  if (a <= b) {
    console.log('%r is less than or equal to %r', a, b);
  }
  if (a > b) {
    console.log('%r is strictly greater than  %r', a, b);
  }
  if (a >= b) {
    console.log('%r is greater than or equal to %r', a, b);
  }
  if (a === b) {
    console.log('%r is equal to %r', a, b);
  }
  if (a !== b) {
    console.log('%r is not equal to %r', a, b);
  }
  if (a === b) {
    console.log('%r has object identity with %r', a, b);
  }
  if (a !== b) {
    console.log('%r has negated object identity with %r', a, b);
  }
}
compare('YUP', 'YUP');
compare('BALL', 'BELL');
compare('24', '123');
compare(24, 123);
compare(5.0, 5);
```
In JavaScript, strings are compared lexically by default, which means that "hello" < "world". However, there are some differences in how the language handles comparison of numeric strings:
- In JavaScript, 24 is not considered less than 123, even though "24" comes before "123" lexically. This is because JavaScript treats numeric strings as having a higher priority than other types when comparing.
- To compare two numbers, you can use the standard comparison operators (<, >, <=, >=). For example:
if (a < b) {
  console.log('%r is strictly less than  %r', a, b);
}
I hope this helps! Let me know if you have any other questions.

