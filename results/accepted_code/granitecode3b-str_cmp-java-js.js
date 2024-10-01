function compareStrings(A, B) {
  if (A == B) {
    console.log(`'${A}' and '${B}' are lexically equal.`);
  } else {
    console.log(`'${A}' and '${B}' are not lexically equal.`);
  }

  if (A.toLowerCase() == B.toLowerCase()) {
    console.log(`'${A}' and '${B}' are case-insensitive lexically equal.`);
  } else {
    console.log(`'${A}' and '${B}' are not case-insensitive lexically equal.`);
  }

  const aNum = parseFloat(A);
  const bNum = parseFloat(B);

  if (isNaN(aNum) && isNaN(bNum)) {
    console.log(
      `'${A}' and '${B}' are not numeric strings and can be compared as usual.`,
    );
  } else if (!isNaN(aNum) && !isNaN(bNum)) {
    console.log(
      `'${A}' and '${B}' are numeric strings and must be parsed as numbers.`,
    );
  } else if (aNum < bNum) {
    console.log(`'${A}' is lexically before '${B}'.`);
  } else if (aNum > bNum) {
    console.log(`'${A}' is lexically after '${B}'.`);
  } else {
    console.log(`'${A}' is not lexically before '${B}'.`);
  }

  if (aNum < bNum) {
    console.log(`'${A}' is not lexically after '${B}'.`);
  } else if (aNum > bNum) {
    console.log(`'${A}' is not lexically before '${B}'.`);
  } else {
    console.log(
      `'${A}' and '${B}' are numeric strings and can be compared normally.`,
    );
  }

  console.log(`The lexical relationship is: ${A.localeCompare(B)}`);
  console.log(
    `The case-insensitive lexical relationship is: ${A.toLowerCase().localeCompare(B.toLowerCase())}`,
  );
}
compareStrings("Hello", "Hello");
compareStrings("5", "5.0");
compareStrings("java", "Java");
compareStrings("ĴÃVÁ", "ĴÃVÁ");
compareStrings("ĴÃVÁ", "ĵãvá");
