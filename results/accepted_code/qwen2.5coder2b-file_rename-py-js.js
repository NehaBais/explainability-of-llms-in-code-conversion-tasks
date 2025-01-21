const fs = require("fs");

// Rename in the current working directory
fs.renameSync("input.txt", "output.txt");
fs.renameSync("docs", "mydocs");

// Rename in the filesystem root
fs.renameSync("/", "output.txt");
fs.renameSync("/", "mydocs");
