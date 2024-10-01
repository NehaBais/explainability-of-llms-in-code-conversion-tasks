let str1 = "abcd";

console.log(str1.startsWith("ab")) //returns true

console.log(str1.endsWith("zn")) //returns false

let str2 = "abab";

console.log(str2.includes("bb"))) // returns false

console.log(str2.includes("ab"))) // returns true

let loc; 
loc = str2.indexOf("bb"); // returns -1
loc = str2.indexOf("ab"); // returns 0
loc = str2.indexOf("ab", loc + 1)); // returns 2