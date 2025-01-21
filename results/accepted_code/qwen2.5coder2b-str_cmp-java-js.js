function compare(A, B) {
  if (A === B) console.log(`'${A}' and '${B}' are lexically equal.`);
  else console.log(`'${A}' and '${B}' are not lexically equal.`);

  if (A.localeCompare(B) === 0)
    console.log(`'${A}' and '${B}' are case-insensitive lexically equal.`);
  else
    console.log(`'${A}' and '${B}' are not case-insensitive lexically equal.`);

  if (A.localeCompare(B) < 0) console.log(`'${A}' is lexically before '${B}'.`);
  else if (A.localeCompare(B) > 0)
    console.log(`'${A}' is lexically after '${B}'.`);

  if (A.localeCompare(B) >= 0)
    console.log(`'${A}' is not lexically before '${B}'.`);
  if (A.localeCompare(B) <= 0)
    console.log(`'${A}' is not lexically after '${B}'.`);

  console.log(`The lexical relationship is: ${A.localeCompare(B)} 
The case-insensitive lexical relationship is: ${A.localeCompare(B, "en-US", { sensitivity: "base" })}`);
}
