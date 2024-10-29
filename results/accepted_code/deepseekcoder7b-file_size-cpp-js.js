const fs = require("fs");
const path = require("path");

function printFileSize(filename) {
  fs.stat(filename, (err, stats) => {
    if (err) {
      console.error(err);
      return;
    }
    console.log(`Size of file ${filename} is ${stats.size} bytes.`);
  });
}

printFileSize("input.txt");
// Absolute path will be different based on where you are running script from
printFileSize(__dirname + "/" + "input.txt");
