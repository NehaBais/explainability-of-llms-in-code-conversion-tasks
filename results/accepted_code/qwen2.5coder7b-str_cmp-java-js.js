function compare(A, B) {
  if (A === B) console.log(`'${A}' and '${B}' are lexically equal.`);
  else console.log(`'${A}' and '${B}' are not lexically equal.`);

  let lowerA = A.toLowerCase(),
    lowerB = B.toLowerCase();
  if (lowerA === lowerB)
    console.log(`'${A}' and '${B}' are case-insensitive lexically equal.`);
  else
    console.log(`'${A}' and '${B}' are not case-insensitive lexically equal.`);

  let compareResult = A.localeCompare(B);
  if (compareResult < 0) console.log(`'${A}' is lexically before '${B}'.`);
  else if (compareResult > 0) console.log(`'${A}' is lexically after '${B}'.`);

  compareResult = A.toLowerCase().localeCompare(B.toLowerCase());
  if (compareResult >= 0)
    console.log(`'${A}' is not lexically before '${B}' when case-insensitive.`);
  if (compareResult <= 0)
    console.log(`'${A}' is not lexically after '${B}' when case-insensitive.`);

  console.log(`The lexical relationship is: ${compareResult}`);
  console.log(
    `The case-insensitive lexical relationship is: ${A.toLowerCase().localeCompare(B.toLowerCase())}\n`,
  );
}

// Testing
compare("Hello", "Hello");
compare("5", "5.0");
compare("java", "Java");
compare("ĴÃVÁ", "ĴÃVÁ");
compare("ĴÃVÁ", "ĵãvá");
