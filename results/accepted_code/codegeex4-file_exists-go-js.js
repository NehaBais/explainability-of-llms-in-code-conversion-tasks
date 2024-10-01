const fs = require("fs");
const path = require("path");

function printStat(filePath) {
  try {
    const stats = fs.statSync(filePath);
    if (stats.isDirectory()) {
      console.log(path.resolve(filePath), "is a directory");
    } else {
      console.log(path.resolve(filePath), "is a file");
    }
  } catch (err) {
    console.error(err.message);
  }
}

printStat("input.txt");
printStat("/input.txt");
printStat("docs");
printStat("/docs");
