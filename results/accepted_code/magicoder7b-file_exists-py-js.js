const fs = require("fs");
const path = require("path");

console.log(fs.existsSync(path.join(__dirname, "input.txt"))); // For the current working directory
console.log(fs.existsSync("/input.txt")); // For a file and a directory in the filesystem root
console.log(fs.existsSync(path.join(__dirname, "docs"))); // For the current working directory
console.log(fs.existsSync("/docs")); // For a file and a directory in the filesystem root
