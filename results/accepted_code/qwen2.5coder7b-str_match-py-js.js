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
