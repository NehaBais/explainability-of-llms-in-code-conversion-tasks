function compareStrings(A, B) {
  if (A === B) {
    console.log(`'${A}' and '${B}' are lexically equal.`);
  } else {
    console.log(`'${A}' and '${B}' are not lexically equal.`);
  }
  console.log();

  if (A.toLowerCase() === B.toLowerCase()) {
    console.log(`'${A}' and '${B}' are case-insensitive lexically equal.`);
  } else {
    console.log(`'${A}' and '${B}' are not case-insensitive lexically equal.`);
  }
  console.log();

  if (A < B) {
    console.log(`'${A}' is lexically before '${B}'.`);
  } else if (A > B) {
    console.log(`'${A}' is lexically after '${B}'.`);
  }

  if (A >= B) {
    console.log(`'${A}' is not lexically before '${B}'.`);
  }
  if (A <= B) {
    console.log(`'${A}' is not lexically after '${B}'.`);
  }

  console.log(`The lexical relationship is: ${A.localeCompare(B)}`);
  console.log(
    `The case-insensitive lexical relationship is: ${A.localeCompare(B, "en", { sensitivity: "base" })}`,
  );
}
compareStrings("Hello", "Hello");
compareStrings("5", "5.0");
compareStrings("java", "Java");
compareStrings("ĴÃVÁ", "Ĵ�VÁ");
compareStrings("Ĵ�VÁ", "ĵãvá");
