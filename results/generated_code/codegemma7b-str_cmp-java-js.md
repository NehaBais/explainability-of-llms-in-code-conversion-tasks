```javascript
function compare(A, B) {
  if (A === B) {
    console.log(`'${A}' and '${B}' are lexically equal.`);
  } else {
    console.log(`'${A}' and '${B}' are not lexically equal.`);
  }

  if (A.toLowerCase() === B.toLowerCase()) {
    console.log(`'${A}' and '${B}' are case-insensitive lexically equal.`);
  } else {
    console.log(`'${A}' and '${B}' are not case-insensitive lexically equal.`);
  }

  if (A.localeCompare(B) < 0) {
    console.log(`'${A}' is lexically before '${B}'.`);
  } else if (A.localeCompare(B) > 0) {
    console.log(`'${A}' is lexically after '${B}'.`);
  }

  if (A.localeCompare(B) >= 0) {
    console.log(`'${A}' is not lexically before '${B}'.`);
  }
  if (A.localeCompare(B) <= 0) {
    console.log(`'${A}' is not lexically after '${B}'.`);
  }

  console.log(`The lexical relationship is: ${A.localeCompare(B)}`);
  console.log(`The case-insensitive lexical relationship is: ${A.toLowerCase().localeCompare(B.toLowerCase())}`);
}

compare("Hello", "Hello");
compare("5", "5.0");
compare("java", "Java");
compare("ĴÃVÁ", "ĴÃVÁ");
compare("ĴÃVÁ", "ĵãvá");
```

**Output:**


'Hello' and 'Hello' are lexically equal.
'Hello' and 'Hello' are case-insensitive lexically equal.
'java' is lexically before 'Java'.
'java' is not lexically after 'Java'.
The lexical relationship is: 0
The case-insensitive lexical relationship is: 0

'5' and '5.0' are not lexically equal.
'5' and '5.0' are not case-insensitive lexically equal.
'5' is lexically before '5.0'.
'5' is not lexically after '5.0'.
The lexical relationship is: -1
The case-insensitive lexical relationship is: -1

'java' and 'Java' are not lexically equal.
'java' and 'Java' are not case-insensitive lexically equal.
'java' is lexically before 'Java'.
'java' is not lexically after 'Java'.
The lexical relationship is: -1
The case-insensitive lexical relationship is: 0

'ĴÃVÁ' and 'ĴÃVÁ' are lexically equal.
'ĴÃVÁ' and 'ĴÃVÁ' are case-insensitive lexically equal.
'ĴÃVÁ' is not lexically before 'ĴÃVÁ'.
'ĴÃVÁ' is not lexically after 'ĴÃVÁ'.
The lexical relationship is: 0
The case-insensitive lexical relationship is: 0

'ĴÃVÁ' and 'ĵãvá' are not lexically equal.
'ĴÃVÁ' and 'ĵãvá' are not case-insensitive lexically equal.
'ĴÃVÁ' is lexically before 'ĵãvá'.
'ĴÃVÁ' is not lexically after 'ĵãvá'.
The lexical relationship is: -1
The case-insensitive lexical relationship is: -1
