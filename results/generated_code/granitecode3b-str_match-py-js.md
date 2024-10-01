Sure, here's the JavaScript code that implements the string matching requirements mentioned in the Python code:
```
console.log("abcd".startsWith("ab")); //true
console.log("abcd".endsWith("zn")); //false
console.log("bb" in "abab"); //false
console.log("ab" in "abab"); //true
let loc = "abab".indexOf("bb"); //-1
loc = "abab".indexOf("ab"); //0
loc = "abab".indexOf("ab",loc+1); //2
```
The `startsWith`, `endsWith`, and `in` methods are used to check if the first string starts with, ends with, or contains the second string, respectively. The `indexOf` method is used to find the index of the first occurrence of the second string in the first string. If a match is found, the location is printed using `console.log()`.

