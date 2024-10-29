let s1 = "abcd";
let s2 = "ab";
console.log(s1.startsWith(s2)); //returns true

s1 = "abcd";
s2 = "zn";
console.log(s1.endsWith(s2)); //returns false

s1 = "abab";
s2 = "ab";
console.log(s1.includes(s2)); //returns true

let loc = 0;
s1 = "abab";
s2 = "bb";
loc = s1.indexOf(s2, loc); //returns -1

loc = 0;
s1 = "abab";
s2 = "ab";
loc = s1.indexOf(s2, loc); //returns 0

loc = 2;
loc = s1.indexOf(s2, loc); //returns 2
