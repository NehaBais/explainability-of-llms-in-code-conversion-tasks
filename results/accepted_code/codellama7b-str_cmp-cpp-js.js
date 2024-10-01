const demoCompare = (a, b, semantically) => {
  console.log(
    `${a} and ${b} are ${a == b ? "" : "not"} exactly ${semantically} equal.`,
  );
  console.log(
    `${a} and ${b} are ${a != b ? "" : "not"} ${semantically} inequal.`,
  );
  console.log(
    `${a} is ${a < b ? "" : "not"} ${semantically} ordered before ${b}.`,
  );
  console.log(
    `${a} is ${a > b ? "" : "not"} ${semantically} ordered after ${b}.`,
  );
};

const a = argc > 1 ? argv[1] : "1.2.Foo";
const b = argc > 2 ? argv[2] : "1.3.Bar";
demoCompare(a, b, "lexically");

// Case-insensitive comparisons by folding both strings to a common case.
const lowerA = a.toLowerCase();
const lowerB = b.toLowerCase();
demoCompare(lowerA, lowerB, "lexically");

// Numeric comparisons; here 'double' could be any type for which the relevant >> operator is defined, eg int, long, etc.
let numA = parseFloat(a);
let numB = parseFloat(b);
demoCompare(numA, numB, "numerically");
