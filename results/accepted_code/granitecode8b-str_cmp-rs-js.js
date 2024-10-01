let a = "abc";
let b = new String("Bac");
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
if (a >= b) {
  console.log("The first string is not lexically before the second");
}
if (a <= b) {
  console.log("The first string is not lexically after the second");
}
// case-insensitive comparisons:
// equality
if (a.localeCompare(b, undefined, { sensitivity: "base" }) === 0) {
  console.log("Both strings are equal when ignoring case");
}
let a2 = a.toUpperCase();
let b2 = b.toUpperCase();
// repeat checks
