const fs = require("fs");

function printFileSize(filename) {
  try {
    const size = fs.statSync(filename).size;
    console.log(`Size of file ${filename} is ${size} bytes.`);
  } catch (err) {
    console.error(err);
  }
}

printFileSize("input.txt");
printFileSize("/input.txt");
