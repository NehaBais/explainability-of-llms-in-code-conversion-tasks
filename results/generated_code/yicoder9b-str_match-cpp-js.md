Here is the JavaScript equivalent of your C++ code:

```js
let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

//Beginning
console.log(s1.startsWith(s3));

//End
console.log(s1.endsWith(s3));

//Anywhere (handle multiple occurrences) 
function findAllOccurrences(mainStr, searchStr){
    let pos = mainStr.indexOf(searchStr);
    while (pos !== -1) {
        console.log(`Found at position ${pos}`);
        pos = mainStr.indexOf(searchStr, pos + 1);
    }
}
findAllOccurrences(s2, s3);
```
This JavaScript code does the following:
1. It uses `startsWith` function to determine if the first string starts with the second string.
2. It uses `endsWith` function to determine if the first string ends with the second string.
3. It defines a function called `findAllOccurrences` which accepts two strings as parameters and finds all occurrences of the search string in the main string, printing their positions.
