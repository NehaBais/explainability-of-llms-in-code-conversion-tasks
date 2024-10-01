const fs = require("fs");

// Rename "input.txt" to "output.txt" in the current working directory
fs.renameSync("input.txt", "output.txt");

// Rename "docs" to "mydocs" in the current working directory
fs.renameSync("docs", "mydocs");

// Rename "/input.txt" to "/output.txt" in the root of the file system
fs.renameSync("/input.txt", "/output.txt");

// Rename "/docs" to "/mydocs" in the root of the file system
fs.renameSync("/docs", "/mydocs");
