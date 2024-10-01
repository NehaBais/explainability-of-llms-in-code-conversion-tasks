Here is the JavaScript version of your Python code:

```javascript
let string1 = "abcd";
let string2 = "ab";

// Check if string1 starts with string2
console.log(string1.startsWith(string2)); // returns true

string2 = "zn";

// Check if string1 ends with string2
console.log(string1.endsWith(string2)); // returns false

let string3 = "abab";
string2 = "bb";

// Check if string3 contains string2 at any location and print the location of match for part 2
if (string3.includes(string2)) {
    console.log(`Match found at index: ${string3.indexOf(string2)}`);
} else {
    console.log("Match not found");
}

string2 = "ab";

// Check if string3 contains multiple occurrences of string2 and print the location of each match
let index = string3.indexOf(string2);
while(index !== -1) {
    console.log(`Match found at index: ${index}`);
    index = string3.indexOf(string2, index + 1);
}
```

In JavaScript, `startsWith`, `endsWith` and `includes` methods are used to check whether a string starts with/ends with or includes another string. The `indexOf` method returns the first occurrence of a specified value in a string, and it can be used in a loop to find all occurrences of a substring in a string.

If the substring is not found, the `indexOf` method will return `-1`. Hence, we can use this fact to check if the substring was found or not.
