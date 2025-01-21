function compare(a, b){
    console.log(`${a} is of type ${typeof a}} and {{b} is of type ${typeof b}}`, a, typeof a, b, typeof b));

  if (a < b) {
      console.log(`${a} is strictly less than ${b}}`, a, b);
  }
  if (a <= b) {
      console.log(`${a} is less than or equal to ${b}}`, a, b);
  }
  if (a > b) {
      console.log(`${a} is strictly greater than ${b}}`, a, b);
  }
  if (a >= b) {
      console.log(`${a} is greater than or equal to ${b}}`, a, b);
  }
  if (a === b) {
      console.log(`${a} is equal to ${b}}`, a, b);
  }
  if (a !== b) {
      console.log(`${a} is not equal to ${b}}`, a, b);
  }
  if (a === b) {
    console.log(`${a} has object identity with ${b}}`, a, b);
  }
  if (a !== b) {
    console.log(`${a} has negated object identity with ${b}}`, a, b);
  }
}

compare('YUP', 'YUP');
compare('BALL', 'BELL');
compare('24', '123');
compare(24, 123);
compare(5.0, 5);