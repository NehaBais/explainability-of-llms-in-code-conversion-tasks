const fs = require("fs");
const path = require("path");
const { existsSync } = fs;

function fileExists(filePath) {
  console.log(`${filePath}:`);
  if (existsSync(filePath)) {
    const stats = fs.statSync(filePath);

    if (stats.isDirectory()) {
      console.log(" is a directory");
    } else {
      console.log(` exists with a file size of ${stats.size} bytes.`);
    }
  } else {
    console.log(" does not exist");
  }
}

fileExists("input.txt");
fileExists("zero_length.txt");
fileExists(path.resolve(__dirname, "docs", "input.txt"));
fileExists(path.resolve(__dirname, "docs", "zero_length.txt"));
