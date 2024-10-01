Here is the JavaScript version of your Python code:

```javascript
function compare(a, b) {
    console.log(`${a} is of type ${typeof a} and ${b} is of type ${typeof b}`);
    if (a <  b)      { console.log(`${a} is strictly less than  ${b}`); } 
    if (a <= b)      { console.log(`${a} is less than or equal to ${b}`); }
    if (a >  b)      { console.log(`${a} is strictly greater than  ${b}`); }
    if (a >= b)      { console.log(`${a} is greater than or equal to ${b}`); }
    if (a == b)      { console.log(`${a} is equal to ${b}`); }
    if (a != b)      { console.log(`${a} is not equal to ${b}`); }
    if (a === b)     { console.log(`${a} has object identity with ${b}`); }
    if (a !== b)     { console.log(`${a} has negated object identity with ${b}`); }
}
compare('YUP', 'YUP');
compare('BALL', 'BELL');
compare('24', '123');
compare(24, 123);
compare(5.0, 5);
```

In JavaScript the `==` operator performs a type coercion which means that it will try to convert one operand to match the other if they are not currently of the same type. The `===` operator does not perform this conversion and hence is also known as strict equality operator.

For case insensitive comparison, you can use the `toLowerCase()` or `toUpperCase()` method in combination with these operators: 

var a = 'Hello';
var b = 'hello';
if (a.toLowerCase() == b.toLowerCase()) { console.log('Strings are equal'); }

