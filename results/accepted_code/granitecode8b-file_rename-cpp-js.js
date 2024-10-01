const fs = require("fs");
// Rename a file in the current working directory
fs.renameSync("input.txt", "output.txt");
fs.renameSync("docs", "mydocs");
// Rename a file in the filesystem root
fs.renameSync("/input.txt", "/output.txt");
fs.renameSync("/docs", "/mydocs");
