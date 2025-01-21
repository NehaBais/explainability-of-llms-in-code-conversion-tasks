const fs = require("fs");
const path = require("path");

function createFilesAndDirectory() {
  try {
    // Create an empty file in the current directory
    fs.writeFileSync(path.join(__dirname, "output.txt"), "");

    // Create an empty file in the root of the filesystem (works on Unix-like systems)
    fs.writeFileSync(path.join("/", "output.txt"), "");

    // Create a directory named "docs" in the current directory
    if (!fs.existsSync(path.join(__dirname, "docs"))) {
      fs.mkdirSync(path.join(__dirname, "docs"));
    }

    // Create a directory named "docs" at the root of the filesystem (works on Unix-like systems)
    if (!fs.existsSync(path.join("/", "docs"))) {
      fs.mkdirSync(path.join("/", "docs"));
    }
  } catch (e) {
    console.error("Error creating file or directory:", e.message);
  }
}

createFilesAndDirectory();
