let str = "abcd";
console.log(str.startsWith("ab")); // true
console.log(str.endsWith("zn")); // false
console.log(str.includes("bb")); // false
console.log(str.includes("ab")); // true

let loc1 = str.indexOf("bb");
console.log(loc1); // -1
let loc2 = str.indexOf("ab");
console.log(loc2); // 0
loc3 = str.indexOf("ab", loc2 + 1);
console.log(loc3); // 2
