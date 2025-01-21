function startsWith(str, prefix) {
  return str.substring(0, prefix.length) === prefix;
}

function contains(str, searchStr) {
  return str.includes(searchStr);
}

function findMatch(str, matchStr) {
  const index = str.indexOf(matchStr);

  if (index === -1) {
    console.log("Did not find any matches");
  } else {
    console.log(`Found match at pos ${index}`);
  }
}

// Test cases
let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Determining if the first string starts with second string
console.assert(
  startsWith(s1, s3),
  `Expected 'true', got '${startsWith(s1, s3)}'`,
);
// Determining if the first string contains the second string at any location
console.assert(contains(s1, s3), `Expected 'true', got '${contains(s1, s3)}'`);
findMatch(s1, s3); // Found match at pos 0

// Optional: Determine if the first string ends with the second string
console.assert(
  startsWith(s2, s3),
  `Expected 'false', got '${startsWith(s2, s3)}'`,
); // Did not find any matches
findMatch(s2, s3); // Did not find any matches
console.assert(
  contains(s2, "ab"),
  `Expected 'true', got '${contains(s2, "ab")}'`,
); // Found match at pos 0

// Optional: Determine if the first string ends with the second string
console.assert(
  startsWith(s3, s3),
  `Expected 'true', got '${startsWith(s3, s3)}'`,
);
findMatch(s3, s3); // Found match at pos 0
