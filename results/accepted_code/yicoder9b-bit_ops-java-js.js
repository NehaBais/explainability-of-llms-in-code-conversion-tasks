function bitwise(a, b) {
  console.log("a AND b: " + (a & b));
  console.log("a OR b: " + (a | b));
  console.log("a XOR b: " + (a ^ b));
  console.log("NOT a: " + ~a);
  console.log("a << b: " + (a << b)); // left shift
  console.log("a >> b: " + (a >> b)); // arithmetic right shift
  // JavaScript does not have '>>>', instead we can use >>> or bitwiseNot for logical right shifts
  console.log("a >>> b: " + (a >>> b));
  // To implement rotate in JS you may need to create custom functions as Javascripts do not provide built-in functions for that
}
