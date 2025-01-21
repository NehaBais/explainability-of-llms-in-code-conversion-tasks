const fs = require("fs");
const path = require("path");

function renameFileOrDirectory(source, target) {
  try {
    fs.renameSync(source, target);
    console.log(`Renamed ${source} to ${target}`);
  } catch (err) {
    console.error(`Error renaming ${source} to ${target}:`, err);
  }
}

// In the current working directory
renameFileOrDirectory("input.txt", "output.txt");
renameFileOrDirectory("docs", "mydocs");

// In the filesystem root
renameFileOrDirectory("/input.txt", "/output.txt");
renameFileOrDirectory("/docs", "/mydocs");
