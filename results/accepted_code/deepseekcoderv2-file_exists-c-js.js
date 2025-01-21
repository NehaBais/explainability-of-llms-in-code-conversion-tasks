const fs = require("fs");
const path = require("path");

// Function to check if a given path is a regular file
function checkReg(filePath) {
  try {
    const stats = fs.statSync(filePath);
    return stats.isFile();
  } catch (err) {
    return false;
  }
}

// Function to check if a given path is a directory
function checkDir(dirPath) {
  try {
    const stats = fs.statSync(dirPath);
    return stats.isDirectory();
  } catch (err) {
    return false;
  }
}

// Check for the current working directory
console.log(
  "input.txt is a regular file? ",
  checkReg("input.txt") ? "yes" : "no",
);
console.log("docs is a directory? ", checkDir("docs") ? "yes" : "no");

// Check for the filesystem root
console.log(
  "/input.txt is a regular file? ",
  checkReg("/input.txt") ? "yes" : "no",
);
console.log("/docs is a directory? ", checkDir("/docs") ? "yes" : "no");
