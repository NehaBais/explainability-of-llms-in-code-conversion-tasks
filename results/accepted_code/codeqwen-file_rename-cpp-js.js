const fs = require("fs");

// Rename a file in the current working directory
fs.renameSync("./input.txt", "./output.txt");

// Rename a directory in the current working directory
fs.renameSync("./docs", "./mydocs");

// Rename a file in the root directory
fs.renameSync("/input.txt", "/output.txt");

// Rename a directory in the root directory
fs.renameSync("/docs", "/mydocs");
