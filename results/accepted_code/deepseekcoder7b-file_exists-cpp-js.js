const fs = require("fs");
const path = require("path");

function fileExists(filePath) {
  console.log(filePath);
  fs.stat(filePath, (error, stats) => {
    if (error) {
      if (error.code === "ENOENT") {
        console.log(" does not exist");
      } else {
        throw error;
      }
    } else {
      if (stats.isDirectory()) {
        console.log(" is a directory");
      } else {
        console.log(` exists with a file size of ${stats.size} bytes.`);
      }
    }
  });
}

fileExists("input.txt");
fileExists("zero_length.txt");
fileExists("docs/input.txt");
fileExists("docs/zero_length.txt");
