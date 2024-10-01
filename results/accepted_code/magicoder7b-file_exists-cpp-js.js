const fs = require("fs");
const path = require("path");

function fileExists(filePath) {
  console.log(filePath);
  if (fs.existsSync(filePath)) {
    if (fs.lstatSync(filePath).isDirectory()) {
      console.log(" is a directory");
    } else {
      console.log(
        " exists with a file size of " +
          fs.readFileSync(filePath).length +
          " bytes.",
      );
    }
  } else {
    console.log(" does not exist");
  }
}

fileExists("input.txt");
fileExists("zero_length.txt");
fileExists(path.join("docs", "input.txt"));
fileExists(path.join("docs", "zero_length.txt"));
