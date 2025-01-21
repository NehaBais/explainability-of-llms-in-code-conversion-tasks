let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Beginning
s1.startsWith(s3);

// End
s1.endsWith(s3);

// Anywhere
s1.indexOf(s2) !== -1;

let loc = s2.indexOf(s3); // returns 0

while (loc !== -1) {
  console.log(loc);
  loc = s2.indexOf(s3, loc + 1);
}
