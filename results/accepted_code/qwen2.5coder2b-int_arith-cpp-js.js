function main() {
  let a, b;

  console.log("Enter two integers:");
  a = parseInt(prompt());
  b = parseInt(prompt());

  console.log(`a+b = ${a + b}`);
  console.log(`a-b = ${a - b}`);
  console.log(`a*b = ${a * b}`);

  if (b !== 0) {
    console.log(`a/b = ${Math.floor(a / b)}, remainder ${a % b}`);
  } else {
    console.log("Error: division by zero");
  }

  // Exponentiation is not directly supported in JavaScript, so we'll skip this for now.
}
