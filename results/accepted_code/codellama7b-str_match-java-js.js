const str1 = "abcd";
const str2 = "ab";
console.log(str1.startsWith(str2)); // true

const str3 = "abcd";
const str4 = "zn";
console.log(str3.endsWith(str4)); // false

const str5 = "abab";
const str6 = "bb";
console.log(str5.indexOf(str6)); // -1

const str7 = "abab";
const str8 = "ab";
console.log(str7.indexOf(str8, 0)); // 0

const str9 = "abab";
const str10 = "bb";
let loc = str9.indexOf(str10);
loc = str7.indexOf(str8, loc + 1);
console.log(loc); // 2
