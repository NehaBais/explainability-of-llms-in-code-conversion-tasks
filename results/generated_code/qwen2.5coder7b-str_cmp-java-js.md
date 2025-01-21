Here's how you can convert the given Java code to JavaScript. Note that in JavaScript, string comparison is done based on Unicode values.

```javascript
function compare(A, B) {
    if (A === B)
        console.log(`'${A}' and '${B}' are lexically equal.`);
    else 
        console.log(`'${A}' and '${B}' are not lexically equal.`);

    let lowerA = A.toLowerCase(), lowerB = B.toLowerCase();
    if (lowerA === lowerB)
        console.log(`'${A}' and '${B}' are case-insensitive lexically equal.`);
    else 
        console.log(`'${A}' and '${B}' are not case-insensitive lexically equal.`);

    let compareResult = A.localeCompare(B);
    if (compareResult < 0)
        console.log(`'${A}' is lexically before '${B}'.`);
    else if (compareResult > 0)
        console.log(`'${A}' is lexically after '${B}'.`);

    compareResult = A.toLowerCase().localeCompare(B.toLowerCase());
    if (compareResult >= 0)
        console.log(`'${A}' is not lexically before '${B}' when case-insensitive.`);
    if (compareResult <= 0)
        console.log(`'${A}' is not lexically after '${B}' when case-insensitive.`);

    console.log(`The lexical relationship is: ${compareResult}`);
    console.log(`The case-insensitive lexical relationship is: ${A.toLowerCase().localeCompare(B.toLowerCase())}\n`);
}

// Testing
compare("Hello", "Hello");
compare("5", "5.0");
compare("java", "Java");
compare("ĴÃVÁ", "ĴÃVÁ");
compare("ĴÃVÁ", "ĵãvá");
```

In JavaScript, the `===` operator compares two values for equality after converting them to the same type if necessary (this is called 'type coercion'). It also checks the case of strings. The `.toLowerCase()` function is used for a case-insensitive comparison. If you need more precise control over string comparison, such as when dealing with numeric strings, you might want to convert the strings to numbers before comparing them. However, in JavaScript, numeric strings are not compared 'lexically' as in Java.

The `localeCompare()` method returns a number indicating whether a reference string comes before or after or is the same as the given string in sort order. It also accepts an optional locales parameter that specifies the language to be used for locale-specific comparison rules.
