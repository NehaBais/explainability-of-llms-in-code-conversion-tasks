const fs = require("fs");
const path = require("path");

function mkdirp(dirPath) {
  try {
    if (fs.existsSync(dirPath)) {
      // Directory already exists, so we do nothing.
      return;
    }

    // Create the directory and any missing parent directories.
    fs.mkdirSync(path.dirname(dirPath), { recursive: true });
  } catch (err) {
    console.error(`Error creating directory ${dirPath}:`, err);
  }
}

// Example usage:
const dirPath = "./path/to/dir";
mkdirp(dirPath);
