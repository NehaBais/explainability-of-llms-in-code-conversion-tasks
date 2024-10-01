function demoCompare(a, b) {
  console.log(
    a +
      " and " +
      b +
      " are " +
      (a === b ? "" : "not ") +
      "exactly lexically equal.",
  );

  console.log(
    a + " and " + b + " are " + (a !== b ? "" : "not ") + "lexically unequal.",
  );

  console.log(
    a + " is " + (a < b ? "" : "not ") + "lexically ordered before " + b + ".",
  );

  console.log(
    a + " is " + (a > b ? "" : "not ") + "lexically ordered after " + b + ".",
  );
}

let a = process.argv[2] || "1.2.Foo";
let b = process.argv[3] || "1.3.Bar";
demoCompare(a, b);

// Case-insensitive comparisons by folding both strings to a common case.
let c = a.toLowerCase();
let d = b.toLowerCase();
demoCompare(c, d);

// Numeric comparisons; here 'double' could be any type for which the
// relevant >> operator is defined, eg int, long, etc.
let numA = parseFloat(a);
let numB = parseFloat(b);
demoCompare(numA, numB);
