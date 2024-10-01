To convert this code from Python to JavaScript, you can use the following lines of code:
```
const s = "12345678";
s = "0" + s; // by concatenation
console.log(s);
```
Explanation:

In JavaScript, strings are immutable, so we cannot modify a string directly. Instead, we can create a new string by concatenating two or more strings together. In this case, we want to prepend the string "0" to the existing string variable `s`. To do this, we use the plus operator (`+`) to concatenate the two strings. The resulting string will be "012345678".

Note that in JavaScript, we must use single quotes (`'`) or double quotes (`"`) to create a string literal. In Python, we can use either single quotes (`'`) or double quotes (`"`). However, it is good practice to use double quotes (`"`) in JavaScript because they allow for more complex data structures such as variables and functions.
