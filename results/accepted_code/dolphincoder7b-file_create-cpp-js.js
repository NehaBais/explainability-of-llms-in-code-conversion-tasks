let fs = require("fs");
const path = require("path");

function createFilesAndDirectories() {
  // Create an empty file called output.txt in the current directory and the filesystem root
  fs.writeFileSync("./output.txt", "");
  fs.writeFileSync("/output.txt", "");

  // Create an empty directory named 'docs' in the current directory and the filesystem root
  fs.mkdirSync("docs");
  fs.mkdirSync("/docs");
}
