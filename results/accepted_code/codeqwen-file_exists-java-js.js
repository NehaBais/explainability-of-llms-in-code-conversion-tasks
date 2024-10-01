// Check for existence of input.txt in the current working directory
const fs = require("fs");
const path = require("path");

let filePath = path.join(process.cwd(), "docs", "input.txt");

fs.access(filePath, fs.constants.F_OK | fs.constants.R_OK, (err) => {
  if (!err) {
    console.log("File exists in the current working directory");
  } else {
    console.log("File does not exist in the current working directory");
  }
});

// Check for existence of input.txt in the root directory
filePath = path.join(process.cwd(), "/docs/input.txt");

fs.access(filePath, fs.constants.F_OK | fs.constants.R_OK, (err) => {
  if (!err) {
    console.log("File exists in the root directory");
  } else {
    console.log("File does not exist in the root directory");
  }
});
