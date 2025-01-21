const fs = require("fs");

// First directory and file operations
fs.renameSync("./input.txt", "./output.txt");
fs.renameSync("./docs", "mydocs");

// Second directory and file operations
fs.renameSync("/input.txt", "/output.txt");
fs.renameSync("/docs", "/mydocs");
