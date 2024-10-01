const fs = require("fs");

const currentWorkingDir = process.cwd();

// Rename in the current working directory
fs.renameSync("input.txt", "output.txt");
fs.renameSync("docs", "mydocs");

// Rename in the filesystem root
fs.renameSync("/input.txt", "/output.txt");
fs.renameSync("/docs", "/mydocs");
