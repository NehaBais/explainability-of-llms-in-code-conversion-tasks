const fs = require("fs");
const path = require("path");
// Verifying existence of a file and directory in the current working directory
for (let file of ["input.txt", "docs"]) {
  try {
    const stats = fs.statSync(file);
    if (stats.isDirectory()) {
      console.log(`${file} is a directory`);
    } else if (stats.isFile()) {
      console.log(`${file} is a file`);
    }
  } catch (err) {
    console.log(`${file} does not exist`);
  }
}
// Verifying existence of a file and directory in the filesystem root
for (let file of [path.join("/", "input.txt"), path.join("/", "docs")]) {
  try {
    const stats = fs.statSync(file);
    if (stats.isDirectory()) {
      console.log(`${file} is a directory`);
    } else if (stats.isFile()) {
      console.log(`${file} is a file`);
    }
  } catch (err) {
    console.log(`${file} does not exist`);
  }
}
