function main() {
  let a = parseInt(prompt("Enter first number: "));
  let b = parseInt(prompt("Enter second number: "));

  console.log("sum:              " + (a + b));
  console.log("difference:       " + (a - b));
  console.log("product:          " + a * b);
  console.log("integer quotient: " + Math.floor(a / b)); // rounds towards zero
  console.log("remainder:        " + (a % b < 0 ? -b % a : b % a)); // positive if same sign or zero
}
