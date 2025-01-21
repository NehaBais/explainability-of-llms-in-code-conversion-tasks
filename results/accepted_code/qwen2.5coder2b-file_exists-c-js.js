const fs = require("fs");
const path = require("path");

function checkReg(path) {
  return fs.statSync(path).isFile();
}

function checkDir(path) {
  return fs.statSync(path).isDirectory();
}

console.log(
  `input.txt is a regular file? ${checkReg("input.txt") ? "yes" : "no"}`,
);
console.log(`docs is a directory? ${checkDir("docs") ? "yes" : "no"}`);
console.log(
  `/input.txt is a regular file? ${checkReg("/input.txt") ? "yes" : "no"}`,
);
console.log(`/docs is a directory? ${checkDir("/docs") ? "yes" : "no"}`);
