const fs = require("fs");
const path = require("path");

// Check for file and directory in the current working directory
console.log(fs.existsSync("input.txt"));
console.log(fs.existsSync("/input.txt"));
console.log(fs.existsSync("docs"));
console.log(fs.existsSync("/docs"));
