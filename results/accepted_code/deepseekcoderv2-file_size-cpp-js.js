const fs = require("fs");
const path = require("path");

function printFileSize(filename) {
  try {
    const filePath = path.resolve(process.cwd(), filename);
    const stats = fs.statSync(filePath);
    console.log(`Size of file ${filename} is ${stats.size} bytes.`);
  } catch (err) {
    console.error(err.message);
  }
}

printFileSize("input.txt");
printFileSize("/input.txt");
