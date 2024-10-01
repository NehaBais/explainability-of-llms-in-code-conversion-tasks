class Compare {
  main() {
    this.compare("Hello", "Hello");
    this.compare("5", "5.0");
    this.compare("java", "Java");
    this.compare("ĴÃVÁ", "ĴÃVÁ");
    this.compare("ĴÃVÁ", "ĵãvá");
  }

  compare(A, B) {
    if (A === B) console.log(`'${A}' and '${B}' are lexically equal.`);
    else console.log(`'${A}' and '${B}' are not lexically equal.`);

    if (A.toLowerCase() === B.toLowerCase())
      console.log(`'${A}' and '${B}' are case-insensitive lexically equal.`);
    else
      console.log(
        `'${A}' and '${B}' are not case-insensitive lexically equal.`,
      );

    if (A < B) console.log(`'${A}' is lexically before '${B}'.`);
    else if (A > B) console.log(`'${A}' is lexically after '${B}'.`);

    if (!(A < B)) console.log(`'${A}' is not lexically before '${B}'.`);
    if (!(A > B)) console.log(`'${A}' is not lexically after '${B}'.`);

    console.log(`The lexical relationship is: ${A.localeCompare(B)}`);
    console.log(
      `The case-insensitive lexical relationship is: ${A.toLowerCase().localeCompare(B.toLowerCase())}`,
    );
  }
}
