// 1. Determining if the first string starts with the second string
const startsWith = (str, substr) => str.startsWith(substr);

console.log(startsWith("abcd", "ab")); // true

// 2. Determining if the first string contains the second string at any location
const contains = (str, substr) => str.includes(substr);

console.log(contains("abcd", "zn")); // false
console.log(contains("abab", "bb")); // false
console.log(contains("abab", "ab")); // true

// 3. Determining if the first string ends with the second string
const endsWith = (str, substr) => str.endsWith(substr);

console.log(endsWith("abcd", "zn")); // false
console.log(endsWith("abcd", "cd")); // true

// Optional 1. Print the location of the match for part 2
const findLocation = (str, substr) => str.indexOf(substr);

console.log(findLocation("abab", "bb")); // -1
console.log(findLocation("abab", "ab")); // 0
console.log(findLocation("abab", "ab", 1)); // 2

// Optional 2. Handle multiple occurrences of a string for part 2
const findLastLocation = (str, substr) => {
  let lastIndex = -1;
  let index = str.indexOf(substr);
  while (index !== -1) {
    lastIndex = index;
    index = str.indexOf(substr, index + 1);
  }
  return lastIndex;
};

console.log(findLastLocation("abab", "ab")); // 2
