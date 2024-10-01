const fs = require("fs");

function printFileSize(filename) {
  try {
    var size = fs.lstatSync(filename).size;
    console.log(`Size of file ${filename} is ${size} bytes.`);
  } catch (error) {
    console.error(error.message);
  }
}

printFileSize("input.txt");
printFileSize("/input.txt");
