// Define the strings
let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Check if s1 starts with s2
let resultStartsWith = s1.startsWith(s2);
console.log(`Starting with ${s2}: ${resultStartsWith}`);

// Check if s1 contains s2 anywhere
let resultContains = s1.includes(s2);
console.log(`Containing ${s2}: ${resultContains}`);

// Find the location of s3 in s1 (0-based index)
let loc = s1.indexOf(s3);
if (loc !== -1) {
  console.log(`Found ${s3} at index ${loc}`);
}

// Find the next occurrence of s3 after the previous one
let nextLoc = s1.indexOf(s3, loc + 1);
if (nextLoc !== -1) {
  console.log(`Next occurrence of ${s3} at index ${nextLoc}`);
}
