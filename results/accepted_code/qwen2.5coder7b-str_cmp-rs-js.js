let a = "abc";
let b = "Bac";

// Comparing two strings for exact equality
if (a === b) {
  console.log("The strings are equal");
}

// Comparing two strings for inequality (i.e., the inverse of exact equality)
if (a !== b) {
  console.log("The strings are not equal");
}

// Comparing two strings to see if one is lexically ordered before than the other
if (a.localeCompare(b) > 0) {
  console.log("The first string is lexically after the second");
}
if (a.localeCompare(b) < 0) {
  console.log("The first string is lexically before the second");
}

// Comparing two strings to see if one is lexically ordered after than the other
if (a.localeCompare(b) >= 0) {
  console.log("The first string is not lexically before the second");
}
if (a.localeCompare(b) <= 0) {
  console.log("The first string is not lexically after the second");
}

// Case insensitive comparisons

// equality
if (a.toLowerCase() === b.toLowerCase()) {
  console.log("Both strings are equal when ignoring case");
}

// For other cases, convert to uppercase and compare as above
let a2 = a.toUpperCase();
let b2 = b.toUpperCase();

// Repeat checks as above.
