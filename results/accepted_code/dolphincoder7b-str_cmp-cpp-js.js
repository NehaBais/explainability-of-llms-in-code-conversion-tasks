function demo_compare(a, b, semantically) {
  console.log(
    `${a} and ${b} are ${a === b ? "" : "not "}exactly ${semantically} equal.`,
  );

  console.log(
    `${a} and ${b} are ${a !== b ? "" : "not "}${semantically} inequal.`,
  );

  console.log(`${a} is ${a < b ? "" : "not "}lexically ordered before ${b}.`);

  console.log(`${a} is ${a > b ? "" : "not "}lexically ordered after ${b}.`);
}

function main() {
  // Case-sensitive comparisons.
  let a = process.argv[2] !== undefined ? process.argv[2] : "1.2.Foo";
  let b = process.argv[3] !== undefined ? process.argv[3] : "1.3.Bar";
  demo_compare(a, b, "lexically");

  // Case-insensitive comparisons by folding both strings to a common case.
  a = a.toLowerCase();
  b = b.toLowerCase();
  demo_compare(a, b, "lexically");

  // Numeric comparisons; here 'double' could be any type for which the
  // relevant >> operator is defined, eg int, long, etc.
  let numA = parseFloat(a);
  let numB = parseFloat(b);
  if (!isNaN(numA) && !isNaN(numB)) {
    demo_compare(numA, numB, "numerically");
  }
}
