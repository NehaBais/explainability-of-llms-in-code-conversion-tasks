const fs = require("fs");
const path = require("path");

function check_reg(filePath) {
  try {
    return fs.statSync(filePath).isFile();
  } catch (err) {
    return false;
  }
}

function check_dir(directoryPath) {
  try {
    return fs.statSync(directoryPath).isDirectory();
  } catch (err) {
    return false;
  }
}

console.log(
  "input.txt is a regular file? " + (check_reg("./input.txt") ? "yes" : "no"),
);
console.log("docs is a directory? " + (check_dir("./docs") ? "yes" : "no"));
// If you want to check files and directories in the filesystem root,
// just prepend './' with an absolute path of your system i.e., '/input.txt', '/docs'.
console.log(
  "/input.txt is a regular file? " + (check_reg("/input.txt") ? "yes" : "no"),
);
console.log("/docs is a directory? " + (check_dir("/docs") ? "yes" : "no"));
