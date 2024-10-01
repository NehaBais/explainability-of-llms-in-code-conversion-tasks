function main() {
  let a = "abc";
  let b = "Bac";

  // Strings are coerced to primitive types when compared
  if (a == b) {
    console.log("The strings are equal");
  }
  if (a != b) {
    console.log("The strings are not equal");
  }
  if (a > b) {
    console.log("The first string is lexically after the second");
  }
  if (a < b) {
    console.log("The first string is lexically before the second");
  }
  // JavaScript does not have separate operators for less than or equal to, just use the > and < checks

  // Case-insensitives:

  // equality
  // here we need to convert both strings to the same case
  if (a.toUpperCase() == b.toUpperCase()) {
    console.log("Both strings are equal when ignoring case");
  }
}
