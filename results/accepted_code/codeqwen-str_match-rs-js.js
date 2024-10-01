function printMatch(possibleMatch) {
  if (possibleMatch === -1) {
    console.log("Did not find any matches");
  } else {
    console.log("Found match at pos " + possibleMatch);
  }
}

function main() {
  let s1 = "abcd";
  let s2 = "abab";
  let s3 = "ab";

  // Determining if the first string starts with second string
  console.assert(
    s1.startsWith(s3),
    "The first string does not start with the second string",
  );
  // Determining if the first string contains the second string at any location
  console.assert(
    s1.includes(s3),
    "The first string does not contain the second string",
  );
  // Print the location of the match
  printMatch(s1.indexOf(s3)); // Found match at pos 0
  printMatch(s1.indexOf(s2)); // Did not find any matches
  // Determining if the first string ends with the second string
  console.assert(
    s2.endsWith(s3),
    "The first string does not end with the second string",
  );
}

main();
