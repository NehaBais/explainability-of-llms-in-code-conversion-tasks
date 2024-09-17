function calculateOperations(a, b) {
  console.log(`Sum: ${a + b}`);
  console.log(`Difference: ${a - b}`);
  console.log(`Product: ${a * b}`);
  console.log(`Integer Quotient: ${Math.floor(a / b)}`); // truncates towards 0
  console.log(`Remainder: ${a % b}`); // same sign as first operand if they are different

  try {
    console.log(`Exponentiation: ${Math.pow(a, b)}`);
  } catch (error) {
    console.error(
      "Exponentiation operation is not supported in this environment.",
    );
  }
}

// Sample usage:
calculateOperations(10, 3);
