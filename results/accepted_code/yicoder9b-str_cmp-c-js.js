// Demonstration of string comparison in JavaScript.

function STREQ(A, B) {
  return A === B;
}
function STRNE(A, B) {
  return !STREQ(A, B);
}
function STRLT(A, B) {
  return A < B;
}
function STRLE(A, B) {
  return A <= B;
}
function STRGT(A, B) {
  return A > B;
}
function STRGE(A, B) {
  return A >= B;
}

// JavaScript handles comparison of numeric strings as lexically.
// So '12' > '2' is true. If you want to perform a numerical comparison instead, you need parseInt or Number function:
function STRLTNUM(A, B) {
  return Number(A) < Number(B);
}
function STRGTNUM(A, B) {
  return Number(A) > Number(B);
}

console.log("	eq , ne , gt , lt , ge , le, gtnumprefix, ltnumprefix");
var testCases = ["ball", "bell", "ball", "ball", "YUP", "YEP"]; // You can add more test cases.
while (testCases.length > 1) {
  let a = testCases.shift();
  let b = testCases.shift();
  console.log(
    `${a} ${STREQ(a, b)} ${STRNE(a, b)} ${STRGT(a, b)} ${STRLT(a, b)} ${STRGE(a, b)} ${STRLE(a, b)}  ${STRGTNUM(a, b)} ${STRLTNUM(a, b)} vs ${b}`,
  );
}
