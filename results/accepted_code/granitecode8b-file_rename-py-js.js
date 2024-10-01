const fs = require("fs");
const path = require("path");
// Rename file in current working directory
fs.renameSync("input.txt", "output.txt");
fs.renameSync("docs", "mydocs");
// Rename file in root directory
fs.renameSync(path.join("/", "input.txt"), path.join("/", "output.txt"));
fs.renameSync(path.join("/", "docs"), path.join("/", "mydocs"));
