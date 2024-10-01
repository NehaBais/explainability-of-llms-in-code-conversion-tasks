const fs = require("fs");
const path = require("path");

function printFileSize(filename) {
  try {
    const size = fs.statSync(path.join(__dirname, filename)).size;
    console.log(`Size of file ${filename} is ${size} bytes.`);
  } catch (error) {
    console.error(error);
  }
}

printFileSize("input.txt");
printFileSize("/input.txt");
