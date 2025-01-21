const fs = require("fs");
const path = require("path");

// Function to check if a file or directory exists
function exists(path) {
  return fs.existsSync(path);
}

// Check for current working directory
const currentDir = path.join(__dirname, "docs", "input.txt");
console.log(`Current Directory: ${exists(currentDir)}`);

// Check for filesystem root
const rootDir = path.join("/", "docs", "input.txt");
console.log(`Root Directory: ${exists(rootDir)}`);
