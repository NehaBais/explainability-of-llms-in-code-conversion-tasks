const fs = require("fs");

function main() {
  let fileName = process.argv[2] || exitErr("No file name supplied", 1);

  try {
    let stats = fs.statSync(fileName);
    console.log(`Size of ${fileName} is ${stats.size} bytes`);
  } catch (e) {
    exitErr(e, 2);
  }
}

function exitErr(msg, code) {
  process.stderr.write(`Error: ${msg}\n`);
  process.exitCode = code;
}
