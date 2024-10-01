//Check for regular file.
const fs = require("fs");
function check_reg(file) {
  try {
    return fs.statSync(file).isFile();
  } catch (err) {
    return false;
  }
}

// Check for directory.
const path = require("path");
function check_dir(directory) {
  try {
    return fs.statSync(directory).isDirectory();
  } catch (err) {
    return false;
  }
}

console.log(
  `input.txt is a regular file? ${check_reg("input.txt") ? "yes" : "no"}`,
);
console.log(`docs is a directory? ${check_dir("docs") ? "yes" : "no"}`);
console.log(
  `/input.txt is a regular file? ${check_reg("/input.txt") ? "yes" : "no"}`,
);
console.log(`/docs is a directory? ${check_dir("/docs") ? "yes" : "no"}`);
