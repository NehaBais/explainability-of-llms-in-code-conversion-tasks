function compareStrings(A, B) {
  if (A === B) {
    console.log(`"${A}" and "${B}" are lexically equal.`);
  } else {
    console.log(`"${A}" and "${B}" are not lexically equal.`);
  }

  if (A.toUpperCase() === B.toUpperCase()) {
    console.log(`"${A}" and "${B}" are case-insensitive lexically equal.`);
  } else if (A.toLowerCase() !== A && A.toLowerCase() === B.toLowerCase()) {
    console.log(
      `"${A}" is not case-insensitive lexically equal to "${B}", but "${A}" equals the case-insensitive variant of "${B}"`,
    );
  } else {
    console.log(`"${A}" and "${B}" are not case-insensitive lexically equal.`);
  }

  if (A < B) {
    console.log(`"${A}" is lexically before "${B}".`);
  } else if (A > B) {
    console.log(`"${A}" is lexically after "${B}".`);
  } else {
    console.log(`"${A}" and "${B}" are not lexically ordered.`);
  }

  if (A >= B) {
    console.log(`"${A}" is not lexically before "${B}".`);
  }

  if (A <= B) {
    console.log(`"${A}" is not lexically after "${B}".`);
  }

  // Numeric string comparison if both are numerical
  let numA = Number(A);
  let numB = Number(B);
  if (!isNaN(numA) && !isNaN(numB)) {
    console.log(`The lexical relationship is: ${numA - numB}`);
  } else {
    console.log("The language does not handle numeric strings as numbers");
  }

  // Other kind of string comparisons are not directly provided in JavaScript because it's a dynamically typed language.
}

compareStrings("Hello", "Hello"); // 'Hello' and 'Hello' are lexically equal.
compareStrings("5", "5.0"); // '5' and '5.0' are not lexically equal.
compareStrings("java", "Java"); // 'java' is lexically before 'Java'.
compareStrings("ĴÃVÁ", "ĴÃVÁ"); // 'ĴÃVÁ' and 'ĴÃVÁ' are case-insensitive lexically equal.
compareStrings("ĴÃVÁ", "ĵãvá"); // 'ĴÃVÁ' is not case-insensitive lexically equal to 'ĵãvá', but 'ĴÃVÁ' equals the case-insensitive variant of 'ĵãvá'
