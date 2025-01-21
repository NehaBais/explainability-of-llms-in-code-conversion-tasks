const fs = require("fs");
const path = require("path");

function printFileSize(f) {
  try {
    const stats = fs.statSync(f);
    console.log(stats.size);
  } catch (err) {
    console.error(err);
  }
}

// Current working directory
printFileSize("input.txt");

// Root of the file system
printFileSize("/input.txt");
