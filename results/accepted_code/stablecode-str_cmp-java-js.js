class Compare {
  static compare(A, B) {
    if (A === B) {
      console.log(`'${A}' and '${B}' are lexically equal.`);
    } else {
      console.log(`'${A}' and '${B}' are not lexically equal.`);
    }

    if (A.localeCompare(B) < 0) {
      console.log(`'${A}' is lexically before '${B}'`));
    } else if (A.localeCompare(B) > 0) {
      console.log(`'${A}' is lexically after '${B}'`));
    }

    let comparison = A.localeCompare(B);

    if (comparison === 0) {
      console.log(`The case-insensitive lexical relationship is: ${comparison}}`);
    } else {
      console.log(`The case-insensitive lexical relationship is: ${comparison}}`));
    }
  }
}

// Example usage
Compare.compare("Hello", "hello");
Compare.compare("5", "5.0");
Compare.compare("java", "Java");
Compare.compare("ĴÃVÁ", "ĴÃVÁ");
Compare.compare("ĴÃVÁ", "ĵãvá");