const fs = require("fs");
const path = require("path");

function printFileSize(f) {
  fs.stat(f, (err, stat) => {
    if (err) {
      console.log(err);
    } else {
      console.log(stat.size);
    }
  });
}

printFileSize("input.txt");
printFileSize("/input.txt");
