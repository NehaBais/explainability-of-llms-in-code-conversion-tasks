// Include necessary libraries if any

function demoCompare(a, b, semantically) {
  if (a === b) {
    console.log(a + " and " + b + " are exactly " + semantically + " equal.");
  } else {
    console.log(
      a + " and " + b + " are not exactly " + semantically + " equal.",
    );
  }

  if (a !== b) {
    console.log(a + " is " + semantically + " ordered before " + b + ".");
    console.log(b + " is " + semantically + " ordered after " + a + ".");
  } else {
    console.log(a + " and " + b + " are exactly " + semantically + " equal.");
  }
}

// Main function
function main() {
  let a = arguments[0] ? arguments[0] : "1.2.Foo";
  let b = arguments[1] ? arguments[1] : "1.3.Bar";
  demoCompare(a, b, "lexically");

  // Case-insensitive comparisons by converting strings to lowercase
  a = a.toLowerCase();
  b = b.toLowerCase();
  demoCompare(a, b, "lexically");

  // Numeric comparison; Here 'double' could be any type for which the >> operator is defined, eg int, long etc.
  let numA, numB;
  numA = Number(a.replace(".", ""));
  numB = Number(b.replace(".", ""));
  demoCompare(numA, numB, "numerically");

  return a == b;
}
