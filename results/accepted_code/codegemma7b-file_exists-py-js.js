const fs = require("fs");
const path = require("path");

// Current working directory
const currentDirectory = process.cwd();
if (
  fs.existsSync(path.join(currentDirectory, "input.txt")) &&
  fs.existsSync(path.join(currentDirectory, "docs"))
) {
  console.log("Files and directory exist in current working directory.");
} else {
  console.log("Files and directory do not exist in current working directory.");
}

// Filesystem root
if (fs.existsSync("/input.txt") && fs.existsSync("/docs")) {
  console.log("Files and directory exist in filesystem root.");
} else {
  console.log("Files and directory do not exist in filesystem root.");
}
