const fs = require("fs");
const path = require("path");

function renameFile(oldPath, newPath) {
  try {
    fs.renameSync(oldPath, newPath);
    console.log(`${oldPath} is renamed to ${newPath}`);
  } catch (error) {
    console.error(`Failed to rename ${oldPath}: ${error}`);
  }
}

const oldDir = "docs";
const newDir = "mydocs";
const oldFile = "input.txt";
const newFile = "output.txt";

// Rename directory in the current working directory
renameFile(oldDir, newDir);
// Rename file in the current working directory
renameFile(oldFile, newFile);
