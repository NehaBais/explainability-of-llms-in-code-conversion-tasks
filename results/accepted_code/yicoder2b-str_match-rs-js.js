function print_match(possible_match) {
  if (possible_match !== undefined && possible_match != null) {
    console.log("Found match at pos:", possible_match);
  } else {
    console.log("Did not find any matches");
  }
}

function main() {
  const s1 = "abcd";
  const s2 = "abab";
  const s3 = "ab";

  // Determining if the first string starts with second string
  assert(s1.startsWith(s3));
  // Determining if the first string contains the second string at any location
  assert(s1.includes(s3));
  print_match(s1.indexOf(s3)); // Found match at pos 0
  print_match(s1.indexOf(s2)); // Did not find any matches
  // Determining if the first string ends with the second string
  assert(s2.endsWith(s3));
}

main();
