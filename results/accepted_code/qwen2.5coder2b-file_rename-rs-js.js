const fs = require("fs");
const path = require("path");

function renameFile(dir, oldName, newName) {
  const filePath = path.join(dir, oldName);
  const newPath = path.join(dir, newName);

  fs.rename(filePath, newPath, (err) => {
    if (err) throw err;
    console.log(`Successfully renamed ${oldName} to ${newName}`);
  });
}

// Rename "input.txt" and "docs" in the current working directory
renameFile(".", "input.txt", "output.txt");
renameFile(".", "docs", "mydocs");

// Rename "input.txt" and "docs" in the root directory
renameFile("/", "input.txt", "output.txt");
renameFile("/", "docs", "mydocs");
