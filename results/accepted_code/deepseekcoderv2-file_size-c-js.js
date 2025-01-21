const fs = require("fs");
const path = require("path");

function getFileSize(filePath) {
  try {
    const stats = fs.statSync(filePath);
    return stats.size;
  } catch (err) {
    if (err.code === "ENOENT") {
      console.log(`${filePath} not found`);
    } else {
      throw err;
    }
  }
}

// Current working directory
const currentFilePath = path.join(__dirname, "input.txt");
console.log(getFileSize(currentFilePath));

// Root file system
const rootFilePath = "/input.txt";
console.log(getFileSize(rootFilePath));
