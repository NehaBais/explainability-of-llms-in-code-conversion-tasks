const fs = require("fs");

function printFileSize(filename) {
  try {
    const size = fs.statSync(filename).size;
    console.log(`Size of file ${filename} is ${size} bytes.`);
  } catch (ex) {
    console.error(ex.message);
  }
}

printFileSize("input.txt");
printFileSize("/input.txt");
