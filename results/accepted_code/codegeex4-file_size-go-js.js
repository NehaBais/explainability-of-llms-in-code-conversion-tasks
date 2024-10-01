const fs = require("fs");

function printFileSize(filePath) {
  try {
    const stats = fs.statSync(filePath);
    console.log(stats.size);
  } catch (err) {
    console.error(err);
  }
}

printFileSize("input.txt");
printFileSize("/input.txt");
