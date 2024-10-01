Sure! Here's the converted code in JavaScript:
```javascript
const str1 = "abcd";
const str2 = "ab";
console.log(str1.startsWith(str2)); // returns True

const str3 = "abcd";
const str4 = "zn";
console.log(str3.endsWith(str4)); // returns False

const str5 = "bb";
const str6 = "abab";
console.log(str6.includes(str5)); // returns False

const str7 = "ab";
const str8 = "abab";
console.log(str8.includes(str7)); // returns True

let loc = str8.indexOf(str5);
console.log(loc); // returns -1

let loc2 = str8.indexOf(str7);
console.log(loc2); // returns 0

let loc3 = str8.indexOf(str7, loc2 + 1);
console.log(loc3); // returns 2
```
Note that JavaScript does not have a `startswith()` function like Python does, so we use the `.startsWith()` method instead. Similarly, JavaScript does not have a `endswith()` function like Python does, so we use the `.endsWith()` method instead. Also, JavaScript does not have an `in` operator like Python does, so we use the `.includes()` method instead to check for the presence of a string within another string.

Regarding the optional requirements, in JavaScript, we can use the `indexOf()` method with a second argument to specify the starting position for searching the substring. If the substring is not found after the specified position, the method returns -1. In the example above, we first search for the substring "bb" in "abab" and get -1 as the result. Then, we search for the substring "ab" in "abab" from the starting position of the previous search (i.e., from index 0) and get 0 as the result. Finally, we search for the substring "ab" in "abab" again, but this time from the starting position 1 (i.e., from index 1), and get 2 as the result.
