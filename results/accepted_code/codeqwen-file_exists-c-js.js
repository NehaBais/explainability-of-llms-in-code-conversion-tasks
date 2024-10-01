const fs = require("fs");
const path = require("path");

function checkFile(filePath) {
  return fs.existsSync(filePath) && fs.lstatSync(filePath).isFile();
}

function checkDir(dirPath) {
  return fs.existsSync(dirPath) && fs.lstatSync(dirPath).isDirectory();
}

console.log(`input.txt is a regular file? ${checkFile("input.txt")}`);
console.log(`docs is a directory? ${checkDir("docs")}`);
console.log(`/input.txt is a regular file? ${checkFile("/input.txt")}`);
console.log(`/docs Is a directory? ${checkDir("/docs")}`);
