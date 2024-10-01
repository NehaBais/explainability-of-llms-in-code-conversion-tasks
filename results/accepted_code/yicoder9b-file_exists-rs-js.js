const fs = require("fs");

function checkFileExistence(file) {
  try {
    let stats = fs.statSync(file);
    if (stats.isDirectory()) {
      console.log(`${file} is a directory`);
    } else {
      console.log(`${file} is a file`);
    }
  } catch (err) {
    console.log(`${file} does not exist`);
  }
}

// Check for files in the current working directory
["input.txt", "docs"].forEach(checkFileExistence);

// Check for files at root level of filesystem
["/input.txt", "/docs"].forEach(checkFileExistence);
