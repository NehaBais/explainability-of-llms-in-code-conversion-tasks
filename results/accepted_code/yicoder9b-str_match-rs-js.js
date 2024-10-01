let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Determining if the first string starts with second string
console.assert(s1.startsWith(s3));
// Determining if the first string contains the second string at any location
console.assert(s1.includes(s3));
// Print the location of the match
let match_pos = s1.indexOf(s3);
if (match_pos >= 0) {
  console.log(`Found match at pos ${match_pos}`);
} else {
  console.log("Did not find any matches");
}
// Determining if the first string ends with the second string
console.assert(s2.endsWith(s3));
