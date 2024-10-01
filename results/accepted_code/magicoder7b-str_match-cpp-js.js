let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Beginning
console.log(s1.slice(0, s3.length) == s3);

// End
console.log(s1.slice(-s3.length) == s3);

// Anywhere
console.log(s1.includes(s2)); // This will return true if the string exists anywhere in s1.
let loc = s1.indexOf(s3); // This will return the index of the first occurrence, or -1 if not found.
while (loc !== -1) {
  console.log("Found at:", loc); // Printing the location of match
  loc = s1.indexOf(s3, loc + 1);
}
