function printMatch(possibleMatch) {
  if (possibleMatch !== -1) {
    console.log(`Found match at pos ${possibleMatch}`);
  } else {
    console.log("Did not find any matches");
  }
}

const s1 = "abcd";
const s2 = "abab";
const s3 = "ab";

// Determining if the first string starts with second string
console.assert(s1.startsWith(s3), `Expected ${s1} to start with ${s3}`);

// Determining if the first string contains the second string at any location
console.assert(
  s1.includes(s2) || s1.includes(s3),
  `Expected ${s1} to contain ${s2 || s3}`,
);

// Print the location of the match
printMatch(s1.indexOf(s3)); // Found match at pos 0
printMatch(s1.indexOf(s2)); // Did not find any matches

// Determining if the first string ends with the second string
console.assert(s2.endsWith(s3), `Expected ${s2} to end with ${s3}`);
