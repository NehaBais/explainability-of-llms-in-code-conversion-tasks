function compare(A, B) {
  if (A === B) {
    console.log(`'${A}' and '${B}' are lexically equal`);
  } else {
    console.log(`'${A}' and '${B}' are not lexically equal`);
  }

  if (A.toLowerCase() == B.toLowerCase()) {
    console.log(`'${A}' and '${B}' are case-insensitive lexically equal`);
  } else {
    console.log(`'${A}' and '${B}' are not case-insensitive lexically equal`);
  }

  if (A < B) {
    console.log(`'${A}' is lexically before '${B}'`);
  } else if (A > B) {
    console.log(`'${A}' is lexically after '${B}'`);
  }
  if (A >= B) {
    console.log(`'${A}' is not lexically before '${B}'`);
  } else if (A <= B) {
    console.log(`'${A}' is not lexically after '${B}'`);
  }
  var comparisonResult = A.localeCompare(B);
  console.log(`The lexical relationship is: ${comparisonResult}`);
  A = A.toLowerCase();
  B = B.toLowerCase();
  var caseInsensitiveComparisonResult = A.localeCompare(B);
  console.log(
    `The case-insensitive lexical relationship is: ${caseInsensitiveComparisonResult}`,
  );
}
compare("Hello", "Hello");
compare("5", "5.0");
compare("java", "Java");
compare("ĴÃVÁ", "ĴÃVÁ");
compare("ĴÃVÁ", "ĵãvá");
