function compare(a, b) {
  console.log("a is of type " + typeof a + " and b is of type " + typeof b);
  if (a < b) {
    console.log("%r is strictly less than %r", a, b);
  }
  if (a <= b) {
    console.log("%r is less than or equal to %r", a, b);
  }
  if (a > b) {
    console.log("%r is strictly greater than %r", a, b);
  }
  if (a >= b) {
    console.log("%r is greater than or equal to %r", a, b);
  }
  if (a === b) {
    console.log("%r is equal to %r", a, b);
  }
  if (a !== b) {
    console.log("%r is not equal to %r", a, b);
  }
  if (a == b) {
    console.log("%r has object identity with %r", a, b);
  }
  if (a != b) {
    console.log("%r has negated object identity with %r", a, b);
  }
}

compare("YUP", "YUP");
compare("BALL", "BELL");
compare("24", "123");
compare(24, 123);
compare(5.0, 5);
