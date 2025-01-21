const fs = require("fs");
const path = require("path");

// Rename files and directories in the current working directory
fs.renameSync(
  path.join(__dirname, "input.txt"),
  path.join(__dirname, "output.txt"),
);
fs.renameSync(path.join(__dirname, "docs"), path.join(__dirname, "mydocs"));

// Rename files and directories in the filesystem root (assuming it's possible to access it)
fs.renameSync("/input.txt", "/output.txt");
fs.renameSync("/docs", "/mydocs");
