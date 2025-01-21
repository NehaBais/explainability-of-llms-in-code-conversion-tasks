const fs = require("fs");

// Rename files and directories in the current working directory
fs.renameSync("input.txt", "output.txt");
fs.renameSync("docs", "mydocs");

// Rename files and directories in the filesystem root
fs.renameSync("/input.txt", "/output.txt");
fs.renameSync("/docs", "/mydocs");
