const fs = require("fs");
const process = require("process");

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
  console.error(`Error: ${msg}`);
  process.exit(code);
}

main();
