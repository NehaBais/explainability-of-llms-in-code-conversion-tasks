function strcmp(a, b) {
  if (typeof a !== "string" || typeof b !== "string")
    throw new Error("Arguments must be strings");
  return a.localeCompare(b);
}

function compare(a, b) {
  console.log(
    `${a} ${strcmp(a, b) === 0 ? "eq" : "ne"} ${strcmp(a, b) > 0 ? "gt" : "lt"} ${strcmp(a, b) >= 0 ? "ge" : "le"} ${b}`,
  );
}

function comparecase(a, b) {
  console.log(
    `${a} ${strcmp(a.toLowerCase(), b.toLowerCase()) === 0 ? "eq" : "ne"} ${strcmp(a.toLowerCase(), b.toLowerCase()) > 0 ? "gt" : "lt"} ${strcmp(a.toLowerCase(), b.toLowerCase()) >= 0 ? "ge" : "le"} ${b}`,
  );
}

let args = process.argv.slice(2);
for (let i = 0; i < args.length - 1; ++i) {
  compare(args[i], args[i + 1]);
}
comparecase(args[0], args[1]);
