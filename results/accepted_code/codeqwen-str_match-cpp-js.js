let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

//Beginning
s1.startsWith(s3);

//End
s1.endsWith(s3);

//Anywhere
s1.includes(s3); // Returns true if found, else false
let loc = s2.indexOf(s3); // Returns the index of the first occurrence of a specified value in a string
while (loc !== -1) {
  console.log("Match found at location: " + loc);
  loc = s2.indexOf(s3, loc + 1); // Returns the next match
}
