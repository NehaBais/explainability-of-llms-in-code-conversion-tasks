function demoCompare(str1, str2, type) {

  let resultExact = str1 === str2;
  let resultInverse = !resultExact;
  let lexicographicalComparison;

  if (type.toLowerCase() === "lexically") {
    lexicographicalComparison = str1 > str2 ? `${str1} is not lexically ordered before ${str2}}` : `${str1} is lexically ordered before ${str2}}`;
    console.log(resultExact, resultInverse, lexicographicalComparison);

  } else if (type.toLowerCase() === "numerically")) {
    // For numeric string comparisons in JavaScript:
    let numStr1 = parseFloat(str1);
    let numStr2 = parseFloat(str2);

    if (Number.isNaN(numStr1)) {
      console.log(`${str1} is not a valid numerical string.`));
      return;
    }
    
    if (Number.isNaN(numStr2)))) {
      console.log(`${str2} is not a valid numerical string.`));
      return;
    }

    let resultNumeric = numStr1 > numStr2 ? `${str1} is numerically ordered after ${str2}}` : (numStr1 < numStr2 ? `${str1} is numerically ordered before ${str2}}` : `${str1} and ${str2} are exactly equal.'});

    console.log(resultNumeric);
  } else {
    console.log(`Invalid type provided for comparison: '${type}'`));
    return;
  }
}

// Demonstrate case-sensitive string comparisons
demoCompare("Hello", "World", "lexically");

// Demonstrate case-insensitive string comparisons by transforming both strings to a common case.
demoCompare(String(a).toLowerCase(), String(b).toLowerCase(), "lexically");

// Demonstrate numeric string comparisons in JavaScript.
demoCompare("2.5", "3.0", "numerically");