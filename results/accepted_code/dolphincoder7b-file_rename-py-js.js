const fs = require("fs"); // Importing file system module
const path = require("path"); // Importing path module

// Renaming files and directories in the current working directory
fs.renameSync("./input.txt", "./output.txt");
fs.renameSync("./docs", "./mydocs");

// Renaming files and directories in root of the filesystem
fs.renameSync(
  path.join(__dirname, "input.txt"),
  path.join(__dirname, "output.txt"),
);
fs.renameSync(path.join(__dirname, "docs"), path.join(__dirname, "mydocs"));
