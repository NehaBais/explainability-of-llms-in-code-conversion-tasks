function logic(a, b) {
  console.log("a and b:", a && b);
  console.log("a or b:", a || b);
  console.log("not a:", !a);
}

logic(true, false); // Outputs: a and b: false  a or b: true  not a: true
logic(false, true); // Outputs: a and b: false  a or b: true  not a: false
logic(true, true); // Outputs: a and b: true  a or b: true  not a: false
