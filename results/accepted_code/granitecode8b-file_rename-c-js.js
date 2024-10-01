const fs = require("fs");
// Rename a file and directory in the current working directory
function renameFileAndDirectory() {
  try {
    // Rename input.txt into output.txt
    fs.renameSync("input.txt", "output.txt");
    // Rename docs into mydocs
    fs.renameSync("docs", "mydocs");
    console.log("Renamed files and directories successfully.");
  } catch (err) {
    console.error("Error renaming files and directories:", err);
  }
}
// Rename a file and directory in the filesystem root
function renameFileAndDirectoryRoot() {
  try {
    // Rename /input.txt into /output.txt
    fs.renameSync("/input.txt", "/output.txt");
    // Rename /docs into /mydocs
    fs.renameSync("/docs", "/mydocs");
    console.log("Renamed files and directories successfully.");
  } catch (err) {
    console.error("Error renaming files and directories:", err);
  }
}
// Call the functions to rename the files and directories
renameFileAndDirectory();
renameFileAndDirectoryRoot();
