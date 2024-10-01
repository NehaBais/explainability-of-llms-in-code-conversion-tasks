let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Determine if the first string starts with second string
console.log(s1.startsWith(s2));

// Determine if the first string contains the second string at any location
if (s1.includes(s2)) {
  console.log("The match was found");
} else {
  console.log("The match was not found");
}

// Determine if the first string ends with the second string
console.log(s1.endsWith(s2));

// Optional requirements:

// 1. Print the location of the match for part 2
let loc = s2.indexOf(s3); // Returns 0
console.log(loc);

loc = s2.indexOf(s3, loc + 1); // Returns 2
console.log(loc);
