const fs = require("fs");
const path = require("path");

function main() {
  let file_name = process.argv[2] || exit_err("No file name supplied", 1);

  try {
    const metadata = fs.statSync(file_name);
    console.log(`Size of ${file_name} is ${metadata.size} bytes`);
  } catch (e) {
    exit_err(e, 2);
  }
}

function exit_err(msg, code) {
  console.error(`Error: ${msg}`);
  process.exit(code);
}

main();
