const s1 = "abcd";
const s2 = "abab";
const s3 = "ab";
//Beginning
s1.startsWith(s3); // returns true
//End
s1.endsWith(s3); // returns true
//Anywhere
s1.includes(s2); // returns true
let loc = s2.indexOf(s3); // returns 0
loc = s2.indexOf(s3, loc + 1); // returns 2
