const fs = require("fs");
const path = require("path");

function createDirs(dirPath) {
  try {
    if (!fs.existsSync(dirPath)) {
      fs.mkdirSync(dirPath, { recursive: true });
    }
  } catch (err) {
    console.error(`Couldn't create directory: ${dirPath}`);
    return -1;
  }
  return 0;
}

createDirs("./path/to/dir");
