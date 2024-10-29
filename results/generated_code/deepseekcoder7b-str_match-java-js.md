In JavaScript, you can use the following methods to achieve what's stated in your Java code. Here is the equivalent JavaScript code for determining if one string starts with another, contains a substring and ends with another string. Additionally, it also provides functionality to find location of matches in the given strings:

```javascript
let str1 = "abcd";
let str2 = "ab";
console.log(str1.startsWith(str2)); //returns true

str1 = "abcd";
str2 = "zn";
console.log(str1.endsWith(str2));  //returns false

str1 = "abab";
str2 = "bb";
console.log(str1.includes(str2)); //returns false

str1 = "abab";
str2 = "ab";
console.log(str1.includes(str2));  //returns true

let loc = 0;
str1 = "abab";
str2 = "bb";
while ((loc = str1.indexOf(str2, loc)) !== -1) {
    console.log(`Found ${str2} at position ${loc}`);
    loc += str2.length;
}  //prints positions of 'bb' in 'abab', which is not found so nothing printed
```
You can run this code snippet in any JavaScript environment to see the output. The logic for finding multiple occurrences remains same as your Java code, we just use a while loop with indexOf inside it. This will print the position of match each time and keep checking the string from next character onwards till there is no match found.

