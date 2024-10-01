const fs = require("fs");
const path = require("path");

function main() {
  const filePath = process.argv[2];
  if (!filePath) {
    console.error("No file name supplied");
    process.exit(1);
  }
  let metadata;
  try {
    metadata = fs.statSync(filePath);
  } catch (e) {
    console.error(`Error: ${e}`);
    process.exit(2);
  }
  console.log(`Size of file.txt is ${metadata.size} bytes`);
}

function exit_err(msg, code) {
  console.error(`Error: ${msg}`);
  process.exit(code);
}
