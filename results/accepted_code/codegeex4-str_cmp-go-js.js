function compareStrings() {
  let c = "cat";
  let d = "dog";

  // Comparing two strings for exact equality
  if (c === d) {
    console.log(c, "is bytewise identical to", d);
  }

  // Comparing two strings for inequality
  if (c !== d) {
    console.log(c, "is bytewise different from", d);
  }

  // Comparing two strings to see if one is lexically ordered before than the other
  if (c < d) {
    console.log(c, "is lexically bytewise less than", d);
  }

  // Comparing two strings to see if one is lexically ordered after than the other
  if (c > d) {
    console.log(c, "is lexically bytewise greater than", d);
  }

  // Case sensitive comparison:
  if (c.localeCompare(d) === 0) {
    console.log(`${c} and ${d} are case sensitive equal`);
  } else {
    console.log(`${c} and ${d} are not case sensitive equal`);
  }

  // Case insensitive comparison
  const cLower = c.toLowerCase();
  const dLower = d.toLowerCase();

  if (cLower === dLower) {
    console.log(c, "is bytewise identical to", d);
  } else {
    console.log(c, "is bytewise different from", d);
  }

  // Comparing numeric strings
  let num1 = "10";
  let num2 = "5";

  if (parseInt(num1) > parseInt(num2)) {
    console.log(`${num1} is greater than ${num2}`);
  } else {
    console.log(`${num1} is not greater than ${num2}`);
  }
}

compareStrings();
