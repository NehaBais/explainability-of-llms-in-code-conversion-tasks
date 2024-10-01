const fs = require("fs");

function checkFileOrDirectory(filePath) {
  try {
    const stats = fs.statSync(filePath);
    if (stats.isDirectory()) {
      console.log(`${filePath} is a directory`);
    } else {
      console.log(`${filePath} is a file`);
    }
  } catch (err) {
    if (err.code === "ENOENT") {
      // ENOENT = no such file or directory
      console.error(`${filePath} does not exist`);
    } else {
      throw err;
    }
  }
}

// Check for the current working directory files and directories.
["input.txt", "docs"].forEach((file) => checkFileOrDirectory(file));

// Check for file and directory in the root of the filesystem.
checkFileOrDirectory("/input.txt");
checkFileOrDirectory("/docs");
