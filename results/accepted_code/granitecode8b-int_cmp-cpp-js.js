let a, b;
if (
  (a = parseInt(prompt("Enter first integer:"))) &&
  (b = parseInt(prompt("Enter second integer:")))
) {
  if (a < b) {
    console.log(`${a} is less than ${b}`);
  } else if (a == b) {
    console.log(`${a} is equal to ${b}`);
  } else {
    console.log(`${a} is greater than ${b}`);
  }
} else {
  console.error("Could not read the numbers");
}
