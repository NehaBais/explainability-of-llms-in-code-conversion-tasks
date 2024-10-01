const fs = require("fs");

function printFileSize(filename) {
  try {
    let stats = fs.statSync(filename);
    console.log(`Size of file ${filename} is ${stats.size} bytes.`);
  } catch (err) {
    console.error(err);
  }
}

printFileSize("./input.txt");
printFileSize("/input.txt");
