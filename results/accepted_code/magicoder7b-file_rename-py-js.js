const fs = require("fs");
const path = require("path");

// current directory
fs.renameSync("input.txt", "output.txt"); // Rename file in same dir.
fs.renameSync("docs", "mydocs"); // Rename folder in same dir.

// root level (change 'your-dir' to the actual name of your directory)
const cwd = process.cwd();
fs.renameSync(path.join(cwd, "/input.txt"), path.join(cwd, "/output.txt")); // Rename file in the root level.
fs.renameSync(path.join(cwd, "/docs"), path.join(cwd, "/mydocs")); // Rename folder in the root level.
