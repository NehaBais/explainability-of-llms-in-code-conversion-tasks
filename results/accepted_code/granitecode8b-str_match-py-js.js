const str1 = "abcd";
const str2 = "ab";
console.log(str1.startsWith(str2)); // Returns true
console.log(str1.includes(str2)); // Returns false
console.log(str1.endsWith(str2)); // Returns false

// Optional requirements:
let loc = str1.indexOf(str2);
console.log(loc); // Returns 0
loc = str1.indexOf(str2, loc + 1);
console.log(loc); // Returns 2
