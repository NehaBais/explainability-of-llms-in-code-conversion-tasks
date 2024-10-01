const fs = require("fs");
const path = require("path");

function printFileSize(filename) {
  try {
    let stats = fs.statSync(filename);
    console.log(`Size of file ${filename} is ${stats.size} bytes.`);
  } catch (error) {
    console.error(error.message);
  }
}

printFileSize(path.join(__dirname, "input.txt"));
printFileSize("/input.txt");
