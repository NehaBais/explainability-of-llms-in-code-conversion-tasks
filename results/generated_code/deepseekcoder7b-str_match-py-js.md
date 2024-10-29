Here is the JavaScript version of your Python code:

JavaScript code:

```javascript
let s1 = "abcd";
let s2 = "ab";
console.log(s1.startsWith(s2)); //returns true

s1 = "abcd";
s2 = "zn";
console.log(s1.endsWith(s2)); //returns false

s1 = "abab";
s2 = "ab";
console.log(s1.includes(s2));  //returns true

let loc = 0;
s1 = "abab";
s2 = "bb";
loc= s1.indexOf(s2, loc); //returns -1

loc = 0;
s1 = "abab";
s2 = "ab";
loc = s1.indexOf(s2, loc);  //returns 0

loc = 2;
loc = s1.indexOf(s2, loc);   //returns 2
```
In this JavaScript code:

- `startsWith` is used for checking if the first string starts with second string.
- `endsWith` is used for checking if the first string ends with the second string.
- `includes` is used for checking if the first string contains the second string at any location.
- `indexOf` function returns the index within the calling String object of the specified value, starting the search at fromIndex. Returns -1 if the search string is not found. 

Please note: The JavaScript equivalent of Python's find method is called indexOf in JavaScript. It is slightly different than what you have in your requirement as it also takes an optional start position for searching. If this parameter is provided, the actual search will begin at that index in the string. This isn’t included in your requirements but was added to provide a comparable operation in both languages.

