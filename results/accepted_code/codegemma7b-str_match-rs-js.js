function printMatch(possibleMatch) {
  if (possibleMatch !== null) {
    console.log(`Found match at pos ${possibleMatch}`);
  } else {
    console.log("Did not find any matches");
  }
}

const s1 = "abcd";
const s2 = "abab";
const s3 = "ab";

// Determining if the first string starts with the second string
console.assert(s1.startsWith(s3));

// Determining if the first string contains the second string at any location
console.assert(s1.includes(s3));

// Print the location of the match
console.log(printMatch(s1.indexOf(s3))); // Found match at pos 0
console.log(printMatch(s1.indexOf(s2))); // Did not find any matches

// Determining if the first string ends with the second string
console.assert(s2.endsWith(s3));
