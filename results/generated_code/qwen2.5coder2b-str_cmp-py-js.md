The equivalent code in JavaScript would be:

```javascript
function compare(a,b) {
    console.log("a is of type " + typeof a + " and b is of type " + typeof b);
    if (a < b) {      console.log('%r is strictly less than %r', a, b);}
    if (a <= b) {      console.log('%r is less than or equal to %r', a, b);}    
    if (a > b) {      console.log('%r is strictly greater than %r', a, b);}
    if (a >= b) {      console.log('%r is greater than or equal to %r', a, b);}
    if (a === b) {      console.log('%r is equal to %r', a, b);}    
    if (a !== b) {      console.log('%r is not equal to %r', a, b);}        
    if (a == b) {      console.log('%r has object identity with %r', a, b);}
    if (a != b) {      console.log('%r has negated object identity with %r', a, b);}
}

compare('YUP', 'YUP');
compare('BALL', 'BELL');
compare('24', '123');
compare(24, 123);
compare(5.0, 5);

```
In JavaScript, strings are not compared as numbers unless they can be converted to a number. If you need to compare two numeric strings, use the `Number` function.

Note: In JavaScript, `===` is used for strict comparison (equal value and equal type), while `==` is used for loose comparison (equal value only). This difference can lead to different results in some cases.
