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
