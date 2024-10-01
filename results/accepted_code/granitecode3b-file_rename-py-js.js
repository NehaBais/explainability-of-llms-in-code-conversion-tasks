const fs = require("fs");
// Rename "input.txt" to "output.txt" and "docs" to "mydocs" in the current working directory
fs.renameSync("input.txt", "output.txt");
fs.renameSync("docs", "mydocs");
// Rename "input.txt" to "output.txt" and "docs" to "mydocs" in the filesystem root
const homeDir = require("os").homedir();
const newPath = `${homeDir}/input.txt`;
const oldPath = `${homeDir}/output.txt`;
fs.renameSync(newPath, oldPath);
