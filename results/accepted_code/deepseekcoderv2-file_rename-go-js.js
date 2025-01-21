const fs = require("fs");
const path = require("path");

// Rename in current working directory
try {
  fs.renameSync("input.txt", "output.txt");
  fs.renameSync("docs", "mydocs");
} catch (err) {
  console.error(`Error renaming file or directory: ${err.message}`);
}

// Rename in filesystem root
try {
  fs.renameSync("/input.txt", "/output.txt");
  fs.renameSync("/docs", "/mydocs");
} catch (err) {
  console.error(`Error renaming file or directory: ${err.message}`);
}
