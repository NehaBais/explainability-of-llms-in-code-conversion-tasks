const fs = require("fs");

function getFileSize(file) {
  const stats = fs.statSync(file);
  return stats.size;
}

console.log(`${getFileSize("input.txt")} B`);

const rootPath = require("path").resolve("/");
console.log(`${getFileSize(rootPath + "/input.txt")} B`);
