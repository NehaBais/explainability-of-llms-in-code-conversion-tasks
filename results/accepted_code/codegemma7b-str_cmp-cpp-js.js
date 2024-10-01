function compareStrings(a, b) {
  // Case-sensitive comparison
  if (a === b) {
    console.log("Exact equality");
  } else {
    console.log("Not exactly equal");
  }

  if (a !== b) {
    console.log("Inequality");
  } else {
    console.log("Not unequal");
  }

  if (a < b) {
    console.log("Ordered before");
  } else {
    console.log("Not ordered before");
  }

  if (a > b) {
    console.log("Ordered after");
  } else {
    console.log("Not ordered after");
  }

  // Case-insensitive comparison
  const lowerA = a.toLowerCase();
  const lowerB = b.toLowerCase();
  if (lowerA === lowerB) {
    console.log("Case-insensitive equality");
  } else {
    console.log("Not case-insensitive equal");
  }

  // Numeric comparison
  const numA = Number(a);
  const numB = Number(b);
  if (numA === numB) {
    console.log("Numeric equality");
  } else {
    console.log("Not numerically equal");
  }
}

compareStrings("hello", "world"); // Example usage
