function compareStrings() {
  const a = "abc";
  const b = "Bac";

  // Exact equality
  if (a === b) {
    console.log("The strings are equal");
  }

  // Inequality
  if (a !== b) {
    console.log("The strings are not equal");
  }

  // Lexicographical comparison (a comes before b)
  if (a < b) {
    console.log("The first string is lexically before the second");
  }

  // Lexicographical comparison (b comes before a)
  if (a > b) {
    console.log("The first string is lexically after the second");
  }

  // Case-sensitive comparison
  if (a.toLowerCase() === b.toLowerCase()) {
    console.log("The strings are equal when ignoring case");
  }

  // Numeric string comparison
  const c = "123";
  const d = "456";
  if (c < d) {
    console.log("The first numeric string is smaller than the second");
  }
}

compareStrings();
