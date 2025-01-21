const fs = require("fs");
const path = require("path");

// Rename in current working directory
try {
  fs.renameSync("input.txt", "output.txt");
  fs.renameSync("docs", "mydocs");
} catch (err) {
  console.error(
    "Error renaming file or directory in current working directory:",
    err,
  );
}

// Rename in filesystem root
try {
  fs.renameSync(path.sep + "input.txt", path.sep + "output.txt");
  fs.renameSync(path.sep + "docs", path.sep + "mydocs");
} catch (err) {
  console.error("Error renaming file or directory in filesystem root:", err);
}
