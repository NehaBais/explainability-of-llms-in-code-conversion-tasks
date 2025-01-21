// JavaScript language string comparison operators:
c = "cat";
d = "dog";

if (c === d) {
  console.log(c + " is bytewise identical to " + d);
} else {
  console.log(c + " is bytewise different from " + d);
}

if (c !== d) {
  console.log(c + " is bytewise different from " + d);
} else {
  console.log(c + " is equal to " + d);
}

if (c > d) {
  console.log(c + " is lexically bytewise greater than " + d);
} else if (c < d) {
  console.log(c + " is lexically bytewise less than " + d);
}

if (c >= d) {
  console.log(c + " is lexically bytewise greater than or equal to " + d);
} else if (c <= d) {
  console.log(c + " is lexically bytewise less than or equal to " + d);
}

// JavaScript's built-in functions for string comparison are:
eqf = `when interpreted as UTF-8 and compared under Unicode
simple case folding rules.`;

if (c.localeCompare(d) === 0) {
  console.log(c + " equal to " + d + eqf);
} else if (c.localeCompare(d) > 0) {
  console.log(c + " is lexically greater than " + d);
} else {
  console.log(c + " is lexically less than " + d);
}

// JavaScript doesn't have a built-in function for case insensitive string comparison,
// but you can create one using the `toUpperCase()` or `toLowerCase()` methods.
if (c.toUpperCase() === d.toUpperCase()) {
  console.log(c + " equal to " + d, eqf);
} else {
  console.log(c + " not equal to " + d, eqf);
}
