let a = parseInt(prompt("Enter first integer: "), 10);
let b = parseInt(prompt("Enter second integer: "), 10);

if (isNaN(a) || isNaN(b)) {
  console.error("could not read the numbers");
} else {
  // test for less-than
  if (a < b) console.log(`${a} is less than ${b}`);

  // test for equality
  if (a == b) console.log(`${a} is equal to ${b}`);

  // test for greater-than
  if (a > b) console.log(`${a} is greater than ${b}`);
}
