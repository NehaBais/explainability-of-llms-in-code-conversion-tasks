function bitwise(a, b) {
  console::console.log("a & b: " + (a & b)); // Note: parentheses are needed because & has lower precedence than <<
  console::console.log("a | b:  " + (a | b));
  console::console.log("a ^ b: " + (a ^ b));
  console::console.log("not a:   " + ~a);

  // Note: the JavaScript shift operators are guaranteed to work with both positive and negative shift amounts.
  console::console.log("a shl b: " + (a << b)); // Note: "<<" is used for left shift
  console::console.log("a shr b: " + (a >> b)); // typically arithmetic right shift, but guaranteed
  var ua = a;
  console::console.log("a lsr b: " + (ua >> b)); // logical right shift (guaranteed)

  // JS does not have rotate functions like C++, so we simulate it using the built-in function for left rotation.
  console::console.log("a rol b: " + rotateLeft(ua, b));
  console::console.log("a ror b: " + rotateRight(ua, b));
}
