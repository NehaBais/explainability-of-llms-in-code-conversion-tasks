const fs = require("fs");
try {
  // Rename file in current working directory
  fs.renameSync("input.txt", "output.txt");
  fs.renameSync("docs", "mydocs");
  // Rename file in root directory
  fs.renameSync("/input.txt", "/output.txt");
  fs.renameSync("/docs", "/mydocs");
  console.log("Files and directories renamed successfully.");
} catch (err) {
  console.error("Error renaming files and directories:", err);
}
