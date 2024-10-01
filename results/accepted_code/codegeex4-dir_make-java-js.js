const fs = require("fs");
const path = require("path");

function mkdirRecursive(dirPath) {
  try {
    // Use 'mkdir -p' approach: make all directories along the path.
    fs.mkdirSync(dirPath, { recursive: true });
    console.log("Path successfully created");
  } catch (err) {
    if (err.code === "EEXIST") {
      console.log("Directory already exists");
    } else {
      throw err;
    }
  }
}

// Example usage:
const dirPath = path.join(__dirname, "./path/to/dir");
mkdirRecursive(dirPath);
