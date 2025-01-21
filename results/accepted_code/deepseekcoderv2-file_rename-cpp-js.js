const fs = require("fs");
const path = require("path");

// Function to rename a file or directory
function renameFileOrDirectory(source, destination) {
  try {
    fs.renameSync(source, destination);
    console.log(`Renamed ${source} to ${destination}`);
  } catch (err) {
    console.error(`Error renaming ${source} to ${destination}:`, err);
  }
}

// In the current working directory
renameFileOrDirectory("input.txt", "output.txt");
renameFileOrDirectory("docs", "mydocs");

// In the filesystem root
renameFileOrDirectory("/input.txt", "/output.txt");
renameFileOrDirectory("/docs", "/mydocs");
