function compareStrings(a, b) {
  console.log(
    `${a} ${0 === a.localeCompare(b, undefined, { numeric: true })}, ${1 === a.localeCompare(b, undefined, { numeric: true })}`,
  );
}

function compareCaseInsensitive(a, b) {
  console.log(
    `${a} ${0 === a.toLowerCase().localeCompare(b.toLowerCase(), undefined, { numeric: true })}, ${1 === a.toLowerCase().localeCompare(b.toLowerCase(), undefined, { numeric: true })} ignoring case`,
  );
}

function compareStringsLexically(a, b) {
  console.log(
    `${a} ${0 === a.localeCompare(b, undefined, { numeric: true })}, ${1 === a.localeCompare(b, undefined, { numeric: true })} lexically`,
  );
}

function main() {
  const args = process.argv.slice(2);
  console.log("	eq , ne , gt , lt , ge , le");
  for (let i = 0; i < args.length; i += 2) {
    const a = args[i];
    const b = args[i + 1];
    compareStrings(a, b);
    compareCaseInsensitive(a, b);
    compareStringsLexically(a, b);
  }
}

main();
