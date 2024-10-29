The JavaScript code would look like this:

```javascript
function printComparison(str1, str2) {
    console.log(`${str1}: ` +
        `Equal = ${str1 === str2}, Not Equal = ${str1 !== str2}, ` + 
        `Greater than = ${str1 > str2}, Less than = ${str1 < str2}, `+  
        `Greater or equal = ${str1 >= str2}, Less or equal = ${str1 <= str2}`); 
}

function printComparisonCaseInsensitive(str1, str2) {
    console.log(`${str1}: (ignoring case) ` +
        `Equal = ${str1.toLowerCase() === str2.toLowerCase()}, Not Equal = ${str1.toLowerCase() !== str2.toLowerCase()}, ` + 
        `Greater than = ${str1.toLowerCase() > str2.toLowerCase()}, Less than = ${str1.toLowerCase() < str2.toLowerCase()}, `+  
        `Greater or equal = ${str1.toLowerCase() >= str2.toLowerCase()}, Less or equal = ${str1.toLowerCase() <= str2<｜begin▁of▁sentence｜>.toLowerCase()}`); 
}

printComparison('ball', 'bell'); // Exact equality and Inequality, Lexicographical comparison
printComparisonCaseInsensitive('ball', 'Bell'); // Case Insensitive exact equality and Inequality, Case insensitive lexicographical comparison
printComparison('YUP', 'YEP'); // Numeric strings comparison
printComparisonCaseInsensitive('YUP', 'yep'); // Case Insensitive numeric strings comparison
```
In JavaScript, we use the `===` and `!==` operators for exact equality and inequality. This will also compare both the value and type of operands, unlike in C where it compares only values but not types. We can use greater than (`>`), less than (`<`) etc. to perform lexicographical comparison as usual in C. In JavaScript, you can convert a string into lowercase or uppercase using `toLowerCase()` and `toUpperCase()` functions respectively.

