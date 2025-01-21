const fs = require("fs");
const path = require("path");

function checkFileOrDirectory(file) {
  const fullPath = path.resolve(file);
  try {
    const stats = fs.lstatSync(fullPath);
    if (stats.isDirectory()) {
      console.log(`${file} is a directory`);
    } else {
      console.log(`${file} is a file`);
    }
  } catch (err) {
    if (err.code === "ENOENT") {
      // ENOENT means "no such file or directory"
      console.log(`${file} does not exist`);
    } else {
      throw err;
    }
  }
}

const files = ["input.txt", "docs", "/input.txt", "/docs"];
files.forEach(checkFileOrDirectory);
