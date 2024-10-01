const fs = require("fs");

function printFileSize(filename) {
  try {
    let stats = fs.statSync(filename);
    console.log(`Size of file ${filename} is ${stats.size} bytes.`);
  } catch (ex) {
    console.error(ex.message);
  }
}
printFileSize("input.txt");
printFileSize("/input.txt");
