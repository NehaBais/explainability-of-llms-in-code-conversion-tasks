const fs = require("fs");

// Rename in current directory
fs.renameSync("input.txt", "output.txt");
fs.renameSync("docs", "mydocs");

// Rename in root directory
fs.renameSync("/input.txt", "/output.txt");
fs.renameSync("/docs", "/mydocs");
