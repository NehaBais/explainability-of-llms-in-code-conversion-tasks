Here's the equivalent JavaScript code for your Java program:
```javascript
function compare(A, B) {
  if (A === B)
    console.log(`'${A}' and '${B}' are lexically equal.`);
  else
    console.log(`'${A}' and '${B}' are not lexically equal.`);

  if (A.toLowerCase() === B.toLowerCase())
    console.log(`'${A}' and '${B}' are case-insensitive lexically equal.`);
  else
    console.log(`'${A}' and '${B}' are not case-insensitive lexically equal.`);

  if (A.localeCompare(B) < 0)
    console.log(`'${A}' is lexically before '${B}'.`);
  else if (A.localeCompare(B) > 0)
    console.log(`'${A}' is lexically after '${B}'.`);

  if (A.localeCompare(B) >= 0)
    console.log(`'${A}' is not lexically before '${B}'.`);
  if (A.localeCompare(B) <= 0)
    console.log(`'${A}' is not lexically after '${B}'.`);

  console.log(`The lexical relationship is: ${A.localeCompare(B)}`);
  console.log(`The case-insensitive lexical relationship is: ${A.toLowerCase().localeCompare(B.toLowerCase())}`);
}

compare("Hello", "Hello");
compare("5", "5.0");
compare("java", "Java");
compare("ĴÃVÁ", "ĴÃVÁ");
compare("ĴÃVÁ", "ĵãvá");
```
Note that in JavaScript, strings are compared lexically using the `localeCompare()` function, which returns a negative number if the first string is before the second one, 0 if they are equal, and a positive number if the first string is after the second one. The case-insensitive comparison is achieved by converting both strings to lowercase using the `toLowerCase()` method before comparing them.
