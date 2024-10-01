let n1 = Number(prompt("Enter first number: "));
let n2 = Number(prompt("Enter second number: "));

if (n1 < n2) {
  console.log(`${n1} is less than ${n2}`);
} else if (n1 == n2) {
  console.log(`${n1} is equal to ${n2}`);
} else {
  console.log(`${n1} is greater than ${n2}`);
}
