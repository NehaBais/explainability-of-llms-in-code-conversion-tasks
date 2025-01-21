function main() {
  // only same types can be compared
  var a = "abc";
  var b = new String("Bac");

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

  // case-insensitives:

  // equality
  var a2 = a.toUpperCase();
  var b2 = b.toUpperCase();

  // repeat checks
}
