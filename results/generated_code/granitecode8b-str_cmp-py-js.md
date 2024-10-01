Here is the converted code from Python to JavaScript:
```javascript
function compare(a, b) {
 console.log(`${a} is of type ${typeof a} and ${b} is of type ${typeof b}`);
 if (a < b) {
 console.log(`${a} is strictly less than ${b}`);
 }
 if (a <= b) {
 console.log(`${a} is less than or equal to ${b}`);
 }
 if (a > b) {
 console.log(`${a} is strictly greater than ${b}`);
 }
 if (a >= b) {
 console.log(`${a} is greater than or equal to ${b}`);
 }
 if (a === b) {
 console.log(`${a} is equal to ${b}`);
 }
 if (a !== b) {
 console.log(`${a} is not equal to ${b}`);
 }
 if (a === b) {
 console.log(`${a} has object identity with ${b}`);
 }
 if (a !== b) {
 console.log(`${a} has negated object identity with ${b}`);
 }
}
compare('YUP', 'YUP');
compare('BALL', 'BELL');
compare('24', '123');
compare(24, 123);
compare(5.0, 5);
compare('24', '123'); // Output: 123 is strictly less than 24
compare(Number('24'), Number('123')); // Output: 123 is strictly less than 24
```
In JavaScript, the comparison operators are different from Python. The `==` operator is used for both exact equality and lexical comparison, while the `===` operator is used for strict equality. The `<`, `<=`, `>`, and `>=` operators are used for ordering comparisons.
To achieve case insensitive comparisons, you can convert both strings to lowercase or uppercase before comparing them.
In JavaScript, numeric strings can be compared lexically if they are converted to numbers using the `Number()` function.
JavaScript provides other kinds of string comparisons, such as `localeCompare()` for comparing strings based on the user's locale settings. However, these are not directly related to the type system like in Python.

