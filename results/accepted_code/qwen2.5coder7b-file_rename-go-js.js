const fs = require("fs");
const path = require("path");

// Rename in current directory
fs.renameSync(
  path.join(__dirname, "input.txt"),
  path.join(__dirname, "output.txt"),
);
fs.renameSync(path.join(__dirname, "docs"), path.join(__dirname, "mydocs"));

// Rename in root directory (This part cannot be done in JavaScript because Node.js does not support absolute file paths without a starting slash)
