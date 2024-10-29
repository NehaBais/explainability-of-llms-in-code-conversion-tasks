const fs = require("fs");

function checkExists(filePath) {
  return fs.existsSync(filePath);
}

// Checking for current working directory and file/directory at root of filesystem
console.log(checkExists("docs/input.txt")); // Current Working Directory
console.log(checkExists("/docs/input.txt")); // File and directory in the filesystem root
