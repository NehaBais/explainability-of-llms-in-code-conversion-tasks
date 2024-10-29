function compare(a, b) {
  console.log(
    "%s is of type %s and %s is of type %s",
    a,
    typeof a,
    b,
    typeof b,
  );

  if (a < b) console.log("%s is strictly less than  %s", a, b);
  if (a <= b) console.log("%s is less than or equal to %s", a, b);
  if (a > b) console.log("%s is strictly greater than  %s", a, b);
  if (a >= b) console.log("%s is greater than or equal to %s", a, b);
  if (a === b) console.log("%s is equal to %s", a, b);
  if (a !== b) console.log("%s is not equal to %s", a, b);

  // JavaScript doesn't provide direct equivalent for Python's 'is' operator because
  // JS uses === and !== for strict equality comparison which checks type as well.
}

compare("YUP", "YUP");
compare("BALL", "BELL");
compare("24", "123");
// compare(24, 123); will throw an error because JS treats numbers and strings differently.
compare("24", "123"); // This is a string comparison in JS.
compare(5.0, 5);
