const fs = require("fs");
// Rename "input.txt" to "output.txt" in the current working directory
fs.renameSync("input.txt", "output.txt");
// Rename "docs" to "mydocs" in the current working directory
fs.renameSync("docs", "mydocs");
// Rename "/input.txt" to "/output.txt" in the filesystem root
fs.renameSync("/input.txt", "/output.txt");
// Rename "/docs" to "/mydocs" in the filesystem root
fs.renameSync("/docs", "/mydocs");
