const fs = require("fs");
const path = require("path");

try {
  const currentDirectory = process.cwd();

  // Create file in the current working directory
  fs.closeSync(fs.openSync(path.join(currentDirectory, "output.txt"), "w"));

  // Create file in the root directory
  fs.closeSync(fs.openSync("/output.txt", "w"));

  // Create directory in the current working directory
  fs.mkdirSync(path.join(currentDirectory, "docs"));

  // Create directory in the root directory
  fs.mkdirSync("/docs");
} catch (err) {
  console.error(err.message);
}
