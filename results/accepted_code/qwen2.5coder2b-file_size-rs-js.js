const fs = require("fs");
const path = require("path");

function main() {
  let fileName =
    process.argv.length > 2
      ? process.argv[2]
      : exitErr("No file name supplied", 1);

  fs.statSync(fileName, (err) => {
    if (err) return exitErr(err.message, 2);

    console.log(`Size of ${fileName} is ${err.size} bytes`);
  });
}

function exitErr(msg, code) {
  process.stderr.write(`${msg}\n`);
  process.exit(code);
}

main();
