const fs = require("fs");
const path = require("path");

function fileExists(filePath) {
  try {
    const stats = fs.statSync(filePath);
    if (stats.isDirectory()) {
      console.log(`${filePath} is a directory`);
    } else {
      console.log(`${filePath} exists with a size of ${stats.size} bytes.`);
    }
  } catch (err) {
    console.log(`${filePath} does not exist`);
  }
}

fileExists(path.join(__dirname, "input.txt"));
fileExists("zero_length.txt");
fileExists(path.join(__dirname, "..", "docs", "input.txt"));
fileExists(path.join(__dirname, "..", "docs", "zero_length.txt"));
