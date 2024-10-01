function main() {
  const A = "abc";
  const b = "Bac";

  if (A === b) {
    console.log("The strings are equal");
  }
  if (A !== b) {
    console.log("The strings are not equal");
  }
  if (A > b) {
    console.log("The first string is lexically after the second");
  }
  if (A < b) {
    console.log("The first string is lexically before the second");
  }
  if (A >= b) {
    console.log("The first string is not lexically before the second");
  }
  if (A <= b) {
    console.log("The first string is not lexically after the second");
  }

  // case-insensitive comparison
  let A2 = A.toUpperCase();
  let b2 = b.toUpperCase();

  if (A2 === b2) {
    console.log("Both strings are equal when ignoring case");
  }

  // repeat checks
}
