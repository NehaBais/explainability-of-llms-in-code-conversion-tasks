function main() {
  var num1 = 0,
    num2 = 0;
  console.log("Enter two integers:");
  process.stdin.once("data", function (data) {
    num1 = parseInt(data.toString().trim());
    process.stdin.once("data", function (data) {
      num2 = parseInt(data.toString().trim());
      console.log("Sum: " + (num1 + num2));
      console.log("Difference: " + (num1 - num2));
      console.log("Product: " + num1 * num2);
      console.log("Quotient: " + Math.trunc(num1 / num2)); // truncates towards zero
      console.log("Remainder: " + (num1 % num2)); // same sign as first operand
    });
  });
}
main();
