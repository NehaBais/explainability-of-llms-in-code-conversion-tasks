function main(argc, argv) {
  let [a, b] = [argv[--argc], argv[--argc]];
  if (b === "0") process.exit(2); // exit with error if second argument is zero

  console.log(`a+b = ${parseInt(a) + parseInt(b)}`);
  console.log(`a-b = ${parseInt(a) - parseInt(b)}`);
  console.log(`a*b = ${parseInt(a) * parseInt(b)}`);
  console.log(`a/b = ${Math.floor(parseInt(a) / parseInt(b))}`); // truncates towards zero
  console.log(`a%b = ${parseInt(a) % parseInt(b)}`); // same sign as first operand

  return 0;
}
