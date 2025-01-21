function compareStrings(str1, str2, order) {
  if (order === "lexically") {
    return str1.localeCompare(str2);
  } else if (order === "numerically") {
    return Number(str1) - Number(str2);
  } else {
    throw new Error("Invalid comparison order");
  }
}

function compareStringsCaseSensitive(str1, str2) {
  return compareStrings(str1.toLowerCase(), str2.toLowerCase());
}

// Case-sensitive comparisons.
const a = process.argv.length > 1 ? process.argv[1] : "1.2.Foo";
const b = process.argv.length > 2 ? process.argv[2] : "1.3.Bar";
console.log(
  compareStrings(a, b, "lexically") === 0
    ? `${a} and ${b} are exactly lexically equal.`
    : `${a} and ${b} are not exactly lexically equal.`,
);

// Case-insensitive comparisons by folding both strings to a common case.
const aLower = a.toLowerCase();
const bLower = b.toLowerCase();
console.log(
  compareStringsCaseSensitive(aLower, bLower) === 0
    ? `${aLower} and ${bLower} are exactly lexically equal.`
    : `${aLower} and ${bLower} are not exactly lexically equal.`,
);

// Numeric comparisons; here 'double' could be any type for which the
// relevant >> operator is defined, eg int, long, etc.
const numA = parseFloat(a);
const numB = parseFloat(b);
console.log(
  compareStrings(numA, numB, "numerically") === 0
    ? `${numA} and ${numB} are exactly numerically equal.`
    : `${numA} and ${numB} are not exactly numerically equal.`,
);
