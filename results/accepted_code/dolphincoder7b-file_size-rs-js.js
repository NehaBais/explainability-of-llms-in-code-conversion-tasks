const fs = require("fs");
const path = require("path");

if (process.argv.length < 3) {
  console.error(`Error: No file name supplied`);
  process.exit(1);
}

const fileName = process.argv[2];
const metadata = fs.statSync(fileName);

console.log(`Size of ${fileName} is ${metadata.size} bytes`);
