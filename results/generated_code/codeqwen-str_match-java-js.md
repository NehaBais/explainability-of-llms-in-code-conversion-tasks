Here is the equivalent JavaScript code for your Java requirement:

```JavaScript
// Determining if the first string starts with second string
let str1 = 'abcd';
let str2 = 'ab';
console.log(str1.startsWith(str2)); //returns true

// Determining if the first string contains the second string at any location
str1 = 'abcd';
str2 = 'bb';
console.log(str1.includes(str2)); //returns false

// Determining if the first string ends with the second string
str1 = 'abcd';
str2 = 'zn';
console.log(str1.endsWith(str2)); //returns false

// Optional requirement 1: Print the location of the match for part 2
let pos = str1.indexOf(str2);
console.log("Index position of '" + str2 + "' is : " + pos);

// Handle multiple occurrences of a string for part 2.
while (pos !== -1) {
    console.log("Found at index: " + pos);
    pos = str1.indexOf(str2, pos + 1);
}
```

The `startsWith`, `includes`, and `endsWith` functions in JavaScript are used to check the first string for a specific condition (string starts with, contains, or ends with). `indexOf` function is used to find the position of a specific substring within a given string. It returns -1 if the substring is not found within the string.

The while loop is used in the optional requirement 2 to handle multiple occurrences of a string for part 2. It continues to search for the substring starting from the index after the last occurrence until no more occurrences are found (i.e., `indexOf` returns -1).
