const fs = require("fs");
const path = require("path");
// Rename "input.txt" to "output.txt" and "docs" to "mydocs" in the current working directory
fs.renameSync(path.join(".", "input.txt"), path.join(".", "output.txt"));
fs.renameSync(path.join(".", "docs"), path.join(".", "mydocs"));
// Rename "input.txt" to "output.txt" and "docs" to "mydocs" in the filesystem root
fs.renameSync("/input.txt", "/output.txt");
fs.renameSync("/docs", "/mydocs");
