Sure! Here's the JavaScript code that implements the given requirements:
```javascript
function compare(a, b) {
    console.log(`${a} is of type ${typeof a} and ${b} is of type ${typeof b}`);
    if (a < b)  {console.log(`${a} is strictly less than ${b}`);}
    if (a <= b) {console.log(`${a} is less than or equal to ${b}`);}
    if (a > b)  {console.log(`${a} is strictly greater than ${b}`);}
    if (a >= b) {console.log(`${a} is greater than or equal to ${b}`);}
    if (a == b) {console.log(`${a} is equal to ${b}`);}
    if (a != b) {console.log(`${a} is not equal to ${b}`);}
    if (a === b) {console.log(`${a} has object identity with ${b}`);}
    if (a !== b) {console.log(`${a} has negated object identity with ${b}`);}
}
compare('YUP', 'YUP');
compare('BALL', 'BELL');
compare('24', '123');
compare(24, 123);
compare(5.0, 5);
```
In this code, `compare()` function is used to compare two strings (a and b) or numbers (a and b). We use the `<`, `>`, `<=`, `>=`, `==`, `!=`, `===`, and `!==` operators for various comparison operations. These operators work on both numbers (`int` or `float`) and strings. 

The `typeof` operator is used to get the type of a variable in JavaScript. It gives us the name of the type as a string, which we can then use to print the types of variables passed as arguments (a and b).

Note that although the code provided performs these comparisons for strings, they are not limited to comparing strings only; it also works on numeric strings (`int` or `float`) because JavaScript treats them as numbers. For example, when we compare `'24'` and `'123'`, the comparison is done lexically: `'2'` (before) `'3'` (after).

Also note that in JavaScript, strict equality operator `===` is used for object identity checks and negated operator `!==` is used for negation of object identity. 

The `console.log()` function is used to print the results of comparison operations to the console window. In this case, it's a common practice in JavaScript to use template literals (`${a}` and `${b}`) for string interpolation. These are enclosed by backticks (`) instead of single quotes (') and allow us to embed expressions within them.

console.log(`'24' is strictly less than '123'`);
console.log(`'BALL' is not equal to 'BELL'`);
console.log(`'5.0' is greater than or equal to 5`);

