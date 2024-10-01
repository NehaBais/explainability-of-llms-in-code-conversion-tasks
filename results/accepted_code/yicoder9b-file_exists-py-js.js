const fs = require("fs");

// Check if input.txt exists in the current directory
console.log(fs.existsSync("input.txt"));

// Check if /input.txt exists at the root of the filesystem
console.log(fs.existsSync("/input.txt"));

// Check if a 'docs' directory exists in the current directory
console.log(fs.existsSync("docs") && fs.lstatSync("docs").isDirectory());

// Check if a 'docs' directory exists at the root of the filesystem
console.log(fs.existsSync("/docs") && fs.lstatSync("/docs").isDirectory());
