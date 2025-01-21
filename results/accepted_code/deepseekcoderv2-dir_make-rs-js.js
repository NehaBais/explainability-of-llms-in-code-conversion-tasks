const fs = require("fs").promises;
const path = require("path");

async function createDir(dirPath) {
  try {
    await fs.mkdir(dirPath, { recursive: true });
    console.log(`Directory created at ${dirPath}`);
  } catch (err) {
    if (err.code !== "EEXIST") {
      throw err;
    } else {
      console.log(`Directory already exists at ${dirPath}`);
    }
  }
}

// Example usage:
const dirPath = "./path/to/dir";
createDir(dirPath).catch((err) => console.error(err));
