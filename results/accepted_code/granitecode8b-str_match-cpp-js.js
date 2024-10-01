let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";
// Beginning
console.log(s1.startsWith(s3)); // true
// End
console.log(s1.endsWith(s3)); // false
// Anywhere
console.log(s1.includes(s2)); // false
console.log(s1.indexOf(s3)); // 0
let loc = s1.indexOf(s3);
loc = s1.indexOf(s3, loc + 1);
console.log(`Location of "${s3}" in "${s1}": ${loc}`); // Location of "ab" in "abcd": 2
