let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Beginning
s1.startsWith(s3); // returns true if s1 starts with s3, false otherwise

// End
s1.endsWith(s3); // returns true if s1 ends with s3, false otherwise

// Anywhere
let index = s2.indexOf(s3); // returns the first occurrence of s3 in s2 or -1 if not found
while (index !== -1) {
  console.log("Found at: " + index); // print match location and then continue searching from there
  index = s2.indexOf(s3, index + 1);
}
