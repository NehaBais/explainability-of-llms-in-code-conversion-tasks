let c = "cat";
let d = "dog";

if (c === d) {
  console.log(c + " is bytewise identical to " + d);
}

if (c !== d) {
  console.log(c + " is bytewise different from " + d);
}

// Lexicographically compare two strings
function lexicographicallyCompare(a, b) {
  let i = 0;
  while (i < a.length && i < b.length) {
    if (a[i] !== b[i]) {
      return a[i].localeCompare(b[i]);
    }
    i++;
  }

  // Check the length of strings
  if (a.length < b.length) return -1;
  else if (a.length > b.length) return 1;
  else return 0;
}

// Case sensitive compare two strings
if (lexicographicallyCompare(c, d) === 0) {
  console.log(c + " is lexically bytewise equal to " + d);
} else {
  console.log(c + " is not lexically bytewise equal to " + d);
}

// Case insensitive compare two strings
if (c.toLowerCase() < d.toLowerCase()) {
  console.log(c + " is lexically less than " + d);
} else if (c.toLowerCase() > d.toLowerCase()) {
  console.log(c + " is lexically greater than " + d);
} else {
  console.log(c + " is lexically equal to " + d);
}

// Comparing numeric strings
let numStr1 = "25";
let numStr2 = "100";

if (numStr1 < numStr2) {
  console.log(numStr1 + " is numerically less than " + numStr2);
} else if (numStr1 > numStr2) {
  console.log(numStr1 + " is numerically greater than " + numStr2);
} else {
  console.log(numStr1 + " is numerically equal to " + numStr2);
}
