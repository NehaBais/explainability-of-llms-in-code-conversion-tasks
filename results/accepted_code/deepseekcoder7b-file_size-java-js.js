const fs = require("fs");

function getFileSize(filename) {
  const stats = fs.statSync(filename);
  return stats.size;
}

console.log(getFileSize("file.txt").toLocaleString() + " B"); // Replace file.txt with your filename
console.log(getFileSize("/file.txt").toLocaleString() + " B"); // Replace /file.txt with the full path of your file
