const fs = require("fs");
const path = require("path");

function createDir(directoryPath) {
  try {
    if (!fs.existsSync(path.dirname(directoryPath))) {
      fs.mkdirSync(path.dirname(directoryPath), { recursive: true });
    }
    if (!fs.existsSync(directoryPath)) {
      fs.mkdirSync(directoryPath);
    }
  } catch (err) {
    console.error("An error occurred:", err);
  }
}

createDir("./path/to/dir");
