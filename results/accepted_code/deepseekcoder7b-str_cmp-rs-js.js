let a = "abc";
let b = "Bac";
// exact equality comparison
if (a === b) {
  console.log("The strings are equal");
}
if (a !== b) {
  console.log("The strings are not equal");
}

// lexical order comparisons
if (a > b) {
  console.log("The first string is lexically after the second");
}
if (a < b) {
  console.log("The first string is lexically before the second");
}

// case-insensitive comparison
if (a.localeCompare(b, undefined, { sensitivity: "base" }) === 0) {
  console.log("Both strings are equal when ignoring case");
}

let c = "123";
let d = "456";
if (c > d) {
  console.log("The first string is lexically after the second");
} // This will not be printed as in numeric comparison, '123' comes before '456'

if (a.charCodeAt(0) > b.charCodeAt(0)) {
  console.log(
    "The first character of the string is lexically after the second",
  );
}
// This will print "The first character of the string is lexically after the second" if a's first character has a larger ASCII value than b's first character.
