const fs = require("fs");
const path = require("path");

function createDir(dirPath) {
  try {
    const resolvedPath = path.resolve(dirPath);
    if (fs.existsSync(resolvedPath)) {
      console.log("path already exists");
      return;
    }
    fs.mkdirSync(resolvedPath, { recursive: true });
    console.log("path successfully created");
  } catch (err) {
    console.error(err);
  }
}

// Usage example
createDir("C:/parent/test");
