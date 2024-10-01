const fs = require("fs");
const path = require("path");

function fileExists(filePath) {
  const filePathObj = path.resolve(filePath);
  if (fs.existsSync(filePathObj)) {
    if (fs.statSync(filePathObj).isDirectory()) {
      console.log(`${filePath} is a directory`);
    } else {
      console.log(
        `${filePath} exists with a file size of ${fs.statSync(filePathObj).size} bytes.`,
      );
    }
  } else {
    console.log(`${filePath} does not exist`);
  }
}

fileExists("input.txt");
fileExists("zero_length.txt");
fileExists("docs/input.txt");
fileExists("docs/zero_length.txt");
