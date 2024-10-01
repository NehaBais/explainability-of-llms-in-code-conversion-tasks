Here is the converted code from C++ to JavaScript:
```javascript
function compareStrings(str1, str2) {
 let result = "";
 if (str1 === str2) {
 result += `${str1} and ${str2} are exactly equal.`;
 } else {
 result += `${str1} and ${str2} are not equal.`;
 }
 if (str1 !== str2) {
 result += `${str1} and ${str2} are not equal.`;
 } else {
 result += `${str1} and ${str2} are exactly equal.`;
 }
 if (str1 < str2) {
 result += `${str1} is lexically ordered before ${str2}.`;
 } else {
 result += `${str1} is not lexically ordered before ${str2}.`;
 }
 if (str1 > str2) {
 result += `${str1} is lexically ordered after ${str2}.`;
 } else {
 result += `${str1} is not lexically ordered after ${str2}.`;
 }
 return result;
}

function compareStringsInsensitive(str1, str2) {
 let str1Lower = str1.toLowerCase();
 let str2Lower = str2.toLowerCase();
 return compareStrings(str1Lower, str2Lower);
}

function compareNumericStrings(str1, str2) {
 let num1 = Number(str1);
 let num2 = Number(str2);
 return compareStrings(num1.toString(), num2.toString());
}
```
In this code, the `compareStrings` function takes two string arguments and returns a string containing the results of various comparisons between them. The function uses the `===`, `!==`, `<`, and `>` operators to compare the strings for exact equality, inequality, lexicographical order, and reverse lexicographical order, respectively.
To achieve case-insensitive comparisons, you can convert both strings to lowercase using the `toLowerCase()` method before comparing them. This is done by calling the `toLowerCase()` method on each string argument and passing the result back as a new string argument.

To compare numeric strings, you can convert them to numbers using the `Number()` function and then perform comparisons on the resulting numbers. This is done by calling the `Number()` function on each string argument and passing the result back as a new number argument.

Note that in JavaScript, the `Number()` function converts non-numeric strings to `NaN` (not a number), which can cause unexpected behavior when performing comparisons. To avoid this issue, you should ensure that both string arguments are valid numeric strings before converting them to numbers. You can do this by checking if the string matches the expected format for a numeric value using regular expressions or other validation techniques.
In addition to lexicographical and numeric comparisons, JavaScript provides various other types of string comparisons, such as `localeCompare()` for comparing strings based on the user's locale settings and `search()` for finding a substring within a larger string. These functions can be used to perform more specific comparisons based on your needs.

