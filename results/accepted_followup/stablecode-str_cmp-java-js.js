class Compare {
  static compare(A, B) {
    if (A === B) {
      console.log(`'${A}' and '${B}' are lexically equal.`);
    } else {
      console.log(`'${A}' and '${B}' are not lexically equal.`);
    }

    let comparison = A.localeCompare(B);

    if (comparison === 0) {
      console.log(`The case-insensitive lexical relationship is: ${comparison}}`);
    } else {
      console.log(`The case-insensitive lexical relationship is: ${comparison}}`));
    }
  }
}