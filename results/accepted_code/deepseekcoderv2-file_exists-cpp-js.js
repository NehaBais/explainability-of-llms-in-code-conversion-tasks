const fs = require("fs");
const path = require("path");

function fileExists(filePath) {
  console.log(`Checking ${filePath}:`);
  if (fs.existsSync(filePath)) {
    if (fs.lstatSync(filePath).isDirectory()) {
      console.log(`${filePath} is a directory.`);
    } else {
      const fileSize = fs.lstatSync(filePath).size;
      console.log(`${filePath} exists with a file size of ${fileSize} bytes.`);
    }
  } else {
    console.log(`${filePath} does not exist.`);
  }
}

// Check in the current working directory
fileExists("input.txt");
fileExists("zero_length.txt");
fileExists(path.join("docs", "input.txt"));
fileExists(path.join("docs", "zero_length.txt"));

// Check in the filesystem root (assuming Node.js has access to the root)
fileExists("/input.txt");
fileExists("/zero_length.txt");
fileExists(path.join("/", "docs", "input.txt"));
fileExists(path.join("/", "docs", "zero_length.txt"));
