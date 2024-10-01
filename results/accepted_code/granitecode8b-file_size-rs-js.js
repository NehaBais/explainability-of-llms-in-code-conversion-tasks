const fs = require("fs");
const path = require("path");
const { exit } = require("process");
function exitErr(msg, code) {
  console.error(`Error: ${msg}`);
  exit(code);
}
function verifyFileSize() {
  const fileName = process.argv[2];
  if (!fileName) {
    exitErr("No file name supplied", 1);
  }

  const filePath = path.join(__dirname, fileName);
  fs.stat(filePath, (err, stats) => {
    if (err) {
      exitErr(err, 2);
    }

    console.log(`Size of ${fileName} is ${stats.size} bytes`);
  });
}
verifyFileSize();
