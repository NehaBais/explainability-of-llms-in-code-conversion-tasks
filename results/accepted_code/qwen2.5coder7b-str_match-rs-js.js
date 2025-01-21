function printMatch(possibleMatch) {
  if (
    possibleMatch !== undefined &&
    possibleMatch !== null &&
    !isNaN(possibleMatch)
  ) {
    console.log(`Found match at pos ${possibleMatch}`);
  } else {
    console.log("Did not find any matches");
  }
}

let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Determining if the first string starts with second string
console.assert(s1.startsWith(s3), "s1 does not start with s3");

// Determining if the first string contains the second string at any location
console.assert(s1.includes(s3), "s1 does not contain s3");

// Print the location of the match
let index = s1.indexOf(s3);
printMatch(index); // Found match at pos 0

index = s1.indexOf(s2);
printMatch(index); // Did not find any matches

// Determining if the first string ends with the second string
console.assert(s2.endsWith(s3), "s2 does not end with s3");
