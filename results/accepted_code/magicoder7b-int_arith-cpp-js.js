let a, b;
a = prompt("Enter the first integer");
b = prompt("Enter the second integer");
console.log("a+b = " + (a + b));
console.log("a-b = " + (a - b));
console.log("a*b = " + a * b);
if (b != 0) {
  console.log("a/b = " + Math.floor(a / b) + ", remainder " + (a % b));
} else {
  console.log("Error: Division by zero is not possible");
}
