Here is how you can convert the Python code to JavaScript:

```javascript
let str1 = "abcd";
let str2 = "ab";

//1. Determining if the first string starts with second string
console.log(str1.startsWith(str2)); // returns True

//2. Determining if the first string contains the second string at any location
console.log(str1.includes(str2)); // returns True

//3. Determining if the first string ends with the second string
console.log(str1.endsWith(str2)); //returns False

str1 = "abab";
str2 = "bb";

//Optional requirements:
//1. Print the location of the match for part 2
let loc = str1.indexOf(str2); // returns -1
console.log(loc);

loc = str1.indexOf(str2, loc + 1); //returns 2
console.log(loc);
```

In JavaScript you can use String.startsWith(), String.includes() and String.endsWith() to determine if a string starts with/contains/ends with another substring. For finding the location of the match in a string, you use String.indexOf(). It returns -1 if the substring is not found. If you want to find all occurrences, you need to loop through the string and use indexOf() inside that loop.
