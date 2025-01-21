let str1 = "abcd";
let str2 = "ab";

console.log(str1.startsWith(str2)); // returns true

console.log(str1.endsWith("zn")); // returns false

let str3 = "abab";

console.log(str3.includes(str2)); // returns true

let loc = str3.indexOf(str2); // returns 0
console.log(loc);

loc = str3.indexOf(str2, loc + 1); // returns 2
console.log(loc);
