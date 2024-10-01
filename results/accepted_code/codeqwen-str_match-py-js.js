function startWith(str, substring) {
  return str.startsWith(substring);
}

function endsWith(str, substring) {
  return str.endsWith(substring);
}

function contains(str, substring) {
  return str.includes(substring);
}

function findAllLocations(str, substring) {
  let locations = [];
  let startIndex = 0;
  while ((startIndex = str.indexOf(substring, startIndex)) !== -1) {
    locations.push(startIndex);
    startIndex++;
  }
  return locations;
}

console.log(startWith("abcd", "ab")); // returns true
console.log(endsWith("abcd", "zn")); // returns false
console.log(contains("bb", "abab")); // returns false
console.log(contains("ab", "abab")); // returns true

let loc = findAllLocations("abab", "ab");
console.log("loc:", loc); // returns [0, 2]
