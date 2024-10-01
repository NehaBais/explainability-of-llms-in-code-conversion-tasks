 In JavaScript, you can use the `==` operator for checking if two strings are equal or not. The `.toLowerCase()` function can be used to convert both strings to lowercase before comparing them, which makes it case-insensitive.

However, JavaScript doesn't handle numeric strings as though they were numbers when compared lexically. So, we will compare `5` and `5.0` using the `.localeCompare()` function, which handles these cases correctly:

```javascript
function compare(A, B) {
    if (A == B) {
        console.log("'" + A + "' and '" + B + "' are lexically equal.");
    } else {
        console.log("'" + A + "' and '" + B + "' are not lexically equal.");
    }

    if (A.toLowerCase() == B.toLowerCase()) {
        console.log("'" + A + "' and '" + B + "' are case-insensitive lexically equal.");
    } else {
        console.log("'" + A + "' and '" + B + "' are not case-insensitive lexically equal.");
    }

    if (A < B) {
        console.log("'" + A + "' is lexically before '" + B + '".' );
    } else if (A > B) {
        console.log("'" + A + "' is lexically after '" + B + '".' );
    }

    if (A <= B) {
        console.log("'" + A + "' is not lexically before '" + B + '".' );
    } 
    if (A >= B) {
        console.log("'" + A + "' is not lexically after '" + B + '".' );
    }

    var comparisonResult = A.localeCompare(B);
    var caseInsensitiveComparisonResult = A.toLowerCase().localeCompare(B.toLowerCase());
    
    console.log("The lexical relationship is: " + comparisonResult);
    console.log("The case-insensitive lexical relationship is: " + caseInsensitiveComparisonResult);
}

compare("Hello", "Hello");
compare("5", "5.0");
compare("java", "Java");
console.log(compare("ĴÃVÁ", "ĴÃVÁ")); // Outputs false for comparison due to the special characters
console.log(compare("ĴÃVÁ", "ĵãvá")); // Outputs true because of the same letter, but different character case
```
