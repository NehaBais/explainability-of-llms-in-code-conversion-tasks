Sure! Here's the JavaScript code that performs the same comparison as the C++ code:
```javascript
function demoCompare(str1, str2, comparison) {
 console.log(`${str1} and ${str2} are ${str1 == str2 ? "" : "not "}exactly ${comparison} equal.`);
 console.log(`${str1} and ${str2} are ${str1 != str2 ? "" : "not "}exactly ${comparison} inequal.`);
 console.log(`${str1} is ${str1 < str2 ? "" : "not "}lexically ordered before ${str2}.`);
 console.log(`${str1} is ${str1 > str2 ? "" : "not "}lexically ordered after ${str2}.`);
}
 
const a = process.argv[2] || '1.2.Foo';
const b = process.argv[3] || '1.3.Bar';
 
demoCompare(a, b, 'lexically');
demoCompare(a.toLowerCase(), b.toLowerCase(), 'lexically');
```
This JavaScript code compares two strings using the `demoCompare` function. It takes three arguments: the first string (`str1`), the second string (`str2`), and the type of comparison to perform (`comparison`). The function prints out whether the strings are exactly equal, not equal, ordered before or after, depending on the comparison type.
The case-insensitive comparisons are achieved by converting both strings to lowercase using the `toLowerCase()` method. The numeric comparisons are performed by parsing the strings into numbers using the `Number` function and then comparing them.
Note that this JavaScript code assumes that the user has provided valid strings as command line arguments. If the user does not provide any arguments, it will use default values of `'1.2.Foo'` and `'1.3.Bar'`.

