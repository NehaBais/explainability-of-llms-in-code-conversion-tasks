const a = "abc";
const b = "Bac";

if (a === b) {
  console.log("The strings are equal");
}

if (a !== b) {
  console.log("The strings are not equal");
}

if (a > b) {
  console.log("The first string is lexically after the second");
}

if (a < b) {
  console.log("The first string is lexically before the second");
}

// Case insensitive comparison:

if (a === b.toLowerCase()) {
  console.log("Both strings are equal when ignoring case");
}
