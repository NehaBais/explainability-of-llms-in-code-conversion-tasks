process.stdin.setEncoding("utf8");

console.log("Please enter two integers:");
process.stdin.on("data", (chunk) => {
  const [a, b] = chunk.split(" ").map(Number);

  console.log(`a+b = ${a + b}`);
  console.log(`a-b = ${a - b}`);
  console.log(`a*b = ${a * b}`);

  // For quotient and remainder, consider the specific behavior for JavaScript's '/' and '%' operators
  const quotient = Math.floor(a / b); // Rounds towards negative infinity
  const remainder = a % b;
  console.log(`a/b = ${quotient}, remainder ${remainder}`);

  process.exit();
});
