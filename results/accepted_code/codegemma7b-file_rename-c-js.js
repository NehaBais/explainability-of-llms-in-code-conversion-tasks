const fs = require("fs");

function renameFilesAndDirectories() {
  // Rename file in current working directory
  fs.renameSync("input.txt", "output.txt");

  // Rename directory in current working directory
  fs.renameSync("docs", "mydocs");

  // Rename file in filesystem root
  fs.renameSync("/input.txt", "/output.txt");

  // Rename directory in filesystem root
  fs.renameSync("/docs", "/mydocs");
}

renameFilesAndDirectories();
