const fs = require("fs");
const path = require("path");

function mkdirp(dirPath) {
  try {
    fs.mkdirSync(dirPath, { recursive: true });
    console.log(`Directory created at ${dirPath}`);
  } catch (err) {
    if (err.code !== "EEXIST") {
      throw err;
    }
    console.log(`Directory already exists at ${dirPath}`);
  }
}

// Example usage:
mkdirp("./path/to/dir");
