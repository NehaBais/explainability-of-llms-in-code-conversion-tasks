const fs = require("fs");
const path = require("path");

function getFileSize(filePath) {
  try {
    const stats = fs.statSync(filePath);
    console.log(`%,d B`, stats.size);
  } catch (err) {
    console.error(`Error getting size of ${filePath}:`, err.message);
  }
}

// Check file in the current working directory
getFileSize(path.join(__dirname, "file.txt"));

// Check file in the root directory
getFileSize("/file.txt");
