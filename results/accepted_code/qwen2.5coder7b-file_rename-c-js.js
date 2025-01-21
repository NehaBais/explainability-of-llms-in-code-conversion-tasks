const fs = require("fs");

// Rename files and directories in the current working directory
fs.renameSync("input.txt", "output.txt");
fs.renameSync("docs", "mydocs");

// Rename files and directories in the filesystem root (requires elevated privileges)
try {
  fs.renameSync("/input.txt", "/output.txt");
  fs.renameSync("/docs", "/mydocs");
} catch (err) {
  console.error(
    "Error renaming files or directories in the filesystem root:",
    err,
  );
}
