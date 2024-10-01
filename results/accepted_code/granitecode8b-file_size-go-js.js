const fs = require("fs");
const path = require("path");
function printFileSize(filePath) {
  try {
    const stats = fs.statSync(filePath);
    console.log(`File size for ${filePath}: ${stats.size} bytes`);
  } catch (err) {
    console.error(`Error reading file: ${err}`);
  }
}
printFileSize(path.join(__dirname, "input.txt"));
printFileSize("/input.txt");
