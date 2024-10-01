const fs = require("fs");
const path = require("path");

// Rename a file in the current directory and the root directory.
fs.renameSync("./input.txt", "./output.txt");
fs.renameSync("/input.txt", "/output.txt");

// Rename a directory in the current directory and the root directory.
fs.renameSync("./docs", "./mydocs");
fs.renameSync("/docs", "/mydocs");
