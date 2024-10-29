function printMatch(possibleMatch) {
  if (possibleMatch !== -1 && possibleMatch !== undefined) {
    console.log("Found match at pos " + possibleMatch);
  } else {
    console.log("Did not find any matches");
  }
}

let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";
// Determining if the first string starts with second string
if (s1.startsWith(s3)) {
  console.log("true");
} //prints 'true'
// Determining if the first string contains the second string at any location
if (s1.includes(s3)) {
  console.log("true");
} //prints 'true'
// Print the location of the match
printMatch(s1.indexOf(s3));
printMatch(s1.indexOf(s2));
// Determining if the first string ends with the second string
if (s2.endsWith(s3)) {
  console.log("true");
} //prints 'true'
