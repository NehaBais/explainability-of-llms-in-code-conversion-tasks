const fs = require("fs");
const path = require("path");
function fileExists(filePath) {
  console.log(filePath);
  if (fs.existsSync(filePath)) {
    if (fs.statSync(filePath).isDirectory()) {
      console.log(" is a directory");
    } else {
      console.log(
        ` exists with a file size of ${fs.statSync(filePath).size} bytes.`,
      );
    }
  } else {
    console.log(" does not exist");
  }
}
fileExists(path.join(__dirname, "input.txt"));
fileExists(path.join(__dirname, "zero_length.txt"));
fileExists(path.join(__dirname, "docs/input.txt"));
fileExists(path.join(__dirname, "docs/zero_length.txt"));
