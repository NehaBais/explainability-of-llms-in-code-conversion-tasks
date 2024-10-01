The JavaScript version of the code would look like this:

```javascript
function compare(A, B){
    console.log("%s is of type %s and %s is of type %s", A, typeof A, B, typeof B);
    if (String(A) <  String(B)){ console.log('%s is strictly less than %s', A, B); }
    if (String(A) <= String(B)){ console.log('%s is less than or equal to %s', A, B); }
    if (String(A) >  String(B)){ console.log('%s is strictly greater than %s', A, B); }
    if (String(A) >= String(B)){ console.log('%s is greater than or equal to %s', A, B); }
    if (String(A) === String(B)) {console.log('%s is equal to %s', A, B); }
    if (String(A) !== String(B)){ console.log('%s is not equal to %s', A, B); }
    if (A === B){ console.log('%s has object identity with %s', A, B); }
    if (A !== B){ console.log('%s has negated object identity with %s', A, B); }

    compare('YUP', 'YUP');
    compare('BALL', 'BELL');
    compare('24', '123');
    compare(24, 123);
    compare(5.0, 5);
}
```

Note: JavaScript handles string comparison lexically by default and does not have a direct equivalent to Python's `is`, so the code compares two strings as strings and checks for equality or inequality.

JavaScript also has a typeof operator that provides the type of an object as a string. It is a primitive method of the Object class. This returns "object" for all non-primitive types like Array, RegExp, Date, Error etc.
