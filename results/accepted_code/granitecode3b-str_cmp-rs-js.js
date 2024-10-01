function main() {
  // only same types can be compared
  // String and String or &str and &str
  // exception: strict equality and inequality also work on &str and String
  let a = "abc";
  let b = "Bac";

  // Strings are coerced to &str when borrowed and needed
  if (a === b) {
    console.log("The strings are equal");
  } else {
    console.log("The strings are not equal");
  }
  if (a > b) {
    console.log("The first string is lexically after the second");
  } else if (a < b) {
    console.log("The first string is lexically before the second");
  } else {
    console.log("The two strings are equal lexicographically");
  }

  // case-insensitives:

  // equality
  // this avoids new allocations
  if (a.toLowerCase() === b.toLowerCase()) {
    console.log("Both strings are equal when ignoring case");
  } else {
    console.log("The strings are not equal when ignoring case");
  }

  // everything else, create owned Strings, then compare as above
  let a2 = a.toUpperCase();
  let b2 = b.toUpperCase();

  if (a2 > b2) {
    console.log("The first string is lexically after the second");
  } else if (a2 < b2) {
    console.log("The first string is lexically before the second");
  } else {
    console.log("The two strings are equal lexicographically");
  }
}
