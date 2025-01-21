const fs = require("fs");
const path = require("path");

function checkFileAndDirectoryExists(filePath, directoryPath) {
  if (fs.existsSync(path.join(__dirname, filePath))) {
    console.log(`${filePath} exists.`);
  } else {
    console.log(`${filePath} does not exist.`);
  }

  if (fs.existsSync(path.join("/", directoryPath))) {
    console.log(`${directoryPath} exists.`);
  } else {
    console.log(`${directoryPath} does not exist.`);
  }
}

checkFileAndDirectoryExists("input.txt", "docs");
