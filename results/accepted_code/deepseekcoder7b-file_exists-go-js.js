const fs = require("fs");
const path = require("path");

function printStat(p) {
  fs.stat(p, (err, stats) => {
    if (err) {
      console.log(err);
      return;
    }

    if (stats.isDirectory()) {
      console.log(p + " is a directory");
    } else {
      console.log(p + " is a file");
    }
  });
}

printStat("input.txt"); // relative to current working directory
printStat("/input.txt"); // absolute path from root of the filesystem
printStat("docs"); // relative to current working directory
printStat("/docs"); // absolute path from root of the filesystem
