function compare(a, b) {
  console.log(
    `%o is of type %s and %o is of type %s`,
    a,
    typeof a,
    b,
    typeof b,
  );

  if (a < b) console.log("%o is strictly less than %o", a, b);
  if (a <= b) console.log("%o is less than or equal to %o", a, b);
  if (a > b) console.log("%o is strictly greater than %o", a, b);
  if (a >= b) console.log("%o is greater than or equal to %o", a, b);
  if (a === b) console.log("%o is equal to %o", a, b);
  if (a !== b) console.log("%o is not equal to %o", a, b);
  if (a == b) console.log("%o is loosely equal to %o", a, b); // In JavaScript, '==' performs type coercion for comparison
  if (a != b) console.log("%o is not loosely equal to %o", a, b); // In JavaScript, '!=' performs type coercion for comparison
  if (a === b) console.log("%o has strict equality with %o", a, b);
  if (a !== b) console.log("%o has negated strict equality with %o", a, b);
}

compare("YUP", "YUP");
compare("BALL", "BELL");
compare("24", "123");
compare(24, 123);
compare(5.0, 5);
