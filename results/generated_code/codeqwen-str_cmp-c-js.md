The given code is written in C and it's performing operations like comparison of two strings for exact equality, inequality, lexical order comparison, and so on. In JavaScript, we can perform the same kind of comparisons using a few built-in functions such as `===`, `!==`, `>`, `<`, `>=`, `<=`.

Here's the equivalent JavaScript code:
```javascript
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
  console.log(`${A}\t${STREQ(A,B)}\t${STRNE(A,B)}\t${STRGT(A,B)}\t${STRLT(A,B)}\t${STRGE(A,B)}\t${STRLE(A,B)} ${B}`);
}
```

In JavaScript, we don't have exact equivalents for `strcasecmp`, as it is not directly supported. But we can use the JavaScript String methods `toUpperCase()` and `toLowerCase()` to perform case-insensitive comparisons:

For example:


function STRCEQ(A, B) {
  return A.toUpperCase() === B.toUpperCase();
}

function STRCNE(A, B) {
  return !STRCEQ(A, B);
}

// For case insensitive lexical order comparison
function STRCLT(A, B) {
  return A.localeCompare(B, undefined, { sensitivity: 'base' }) < 0;
}

function STRCGT(A, B) {
  return A.localeCompare(B, undefined, { sensitivity: 'base' }) > 0;
}

// for case insensitive lexical order comparison
function STRCLE(A, B) {
  return A.localeCompare(B, undefined, { sensitivity: 'base' }) <= 0;
}

function STRCGE(A, B) {
  return A.localeCompare(B, undefined, { sensitivity: 'base' }) >= 0;
}

For comparing numeric strings, JavaScript will treat them as numbers if possible and compare accordingly because of the nature of JavaScript's type system. If you want to treat them lexically, you can use a different function for comparison.
