const fs = require("fs");

// Rename files in current working directory and filesystem root
function renameFiles() {
  fs.renameSync("input.txt", "output.txt");
  fs.renameSync("docs", "mydocs");
  fs.renameSync("/input.txt", "/output.txt");
  fs.renameSync("/docs", "/mydocs");
}

// Call the function to perform the renaming
renameFiles();
