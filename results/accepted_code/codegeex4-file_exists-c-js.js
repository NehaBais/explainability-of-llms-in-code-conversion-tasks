const fs = require("fs");
const path = require("path");

function checkFile(file) {
  try {
    const stats = fs.lstatSync(file);
    return stats.isFile();
  } catch (err) {
    return false;
  }
}

function checkDirectory(dir) {
  try {
    const stats = fs.lstatSync(dir);
    return stats.isDirectory();
  } catch (err) {
    return false;
  }
}

console.log(
  "input.txt is a regular file? " + (checkFile("input.txt") ? "yes" : "no"),
);
console.log("docs is a directory? " + (checkDirectory("docs") ? "yes" : "no"));

console.log(
  "/input.txt is a regular file? " +
    (checkFile(path.join("/", "input.txt")) ? "yes" : "no"),
);
console.log(
  "/docs is a directory? " +
    (checkDirectory(path.join("/", "docs")) ? "yes" : "no"),
);
