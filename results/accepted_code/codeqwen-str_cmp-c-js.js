// Function to check equality of two strings
function STREQ(A, B) {
  return A === B;
}

// Function to check inequality of two strings
function STRNE(A, B) {
  return A !== B;
}

// Function to check if one string is lexically ordered before another
function STRLT(A, B) {
  return A < B;
}

// Function to check if one string is lexically ordered after another
function STRGT(A, B) {
  return A > B;
}

// Function to check if one string is lexically ordered before or equal to another
function STRLE(A, B) {
  return STREQ(A, B) || STRLT(A, B);
}

// Function to check if one string is lexically ordered after or equal to another
function STRGE(A, B) {
  return STRGT(A, B) || STREQ(A, B);
}

console.log("    eq , ne , gt , lt , ge , le");
var ac = process.argv.length;
for (let i = 2; i < ac; i += 2) {
  let a = process.argv[i];
  let B = process.argv[i + 1];
  console.log(
    `${A}\t${STREQ(A, B)}\t${STRNE(A, B)}\t${STRGT(A, B)}\t${STRLT(A, B)}\t${STRGE(A, B)}\t${STRLE(A, B)} ${B}`,
  );
}
