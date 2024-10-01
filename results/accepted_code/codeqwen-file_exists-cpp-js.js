const fs = require("fs");
const path = require("path");

function fileExists(dirPath) {
  let exists = fs.existsSync(dirPath);
  console.log(dirPath + (exists ? " exists" : " does not exist"));

  if (exists && fs.statSync(dirPath).isDirectory()) {
    console.log(dirPath + " is a directory");
  } else if (exists) {
    console.log(
      dirPath +
        " exists with a file size of " +
        fs.statSync(dirPath).size +
        " bytes.",
    );
  }
}

fileExists("input.txt");
fileExists("zero_length.txt");
fileExists("docs/input.txt");
fileExists("docs/zero_length.txt");
