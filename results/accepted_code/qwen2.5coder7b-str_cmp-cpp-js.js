function demoCompare(a, b, semantically) {
  console.log(
    `${a} and ${b} are ${a === b ? "" : "not "}exactly ${semantically} equal.`,
  );
  console.log(
    `${a} and ${b} are ${a !== b ? "" : "not "}exactly ${semantically} unequal.`,
  );
  console.log(`${a} is ${a < b ? "" : "not "}lexically ordered before ${b}.`);
  console.log(`${a} is ${a > b ? "" : "not "}lexically ordered after ${b}.`);
}

function main() {
  let a = process.argv.length > 2 ? process.argv[2] : "1.2.Foo";
  let b = process.argv.length > 3 ? process.argv[3] : "1.3.Bar";

  demoCompare(a, b, "lexically");

  // Case-insensitive comparisons by folding both strings to a common case.
  a = a.toLowerCase();
  b = b.toLowerCase();
  demoCompare(a, b, "lexically");

  let numA = parseFloat(a);
  let numB = parseFloat(b);

  demoCompare(numA, numB, "numerically");
}

main();
