const fs = require("fs");
const path = require("path");
try {
  // Create a new empty file called "output.txt" in the current working directory
  fs.writeFileSync(path.join(__dirname, "output.txt"), "");

  // Create an empty directory called "docs" in the current working directory
  fs.mkdirSync(path.join(__dirname, "docs"));

  // Get the root directory of the filesystem
  const rootDir = path.parse(process.cwd()).root;

  // Create a new empty file called "output.txt" in the filesystem root
  fs.writeFileSync(path.join(rootDir, "output.txt"), "");

  // Create an empty directory called "docs" in the filesystem root
  fs.mkdirSync(path.join(rootDir, "docs"));
} catch (err) {
  console.error(err);
}
