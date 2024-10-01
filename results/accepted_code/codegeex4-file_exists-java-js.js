const fs = require("fs");
const path = require("path");

// Current working directory
if (fs.existsSync(path.join(process.cwd(), "docs/input.txt"))) {
  console.log("The file exists in the current working directory.");
} else {
  console.log("The file does not exist in the current working directory.");
}

if (fs.existsSync(path.join(process.cwd(), "docs"))) {
  console.log("The directory exists in the current working directory.");
} else {
  console.log("The directory does not exist in the current working directory.");
}

// Filesystem root
const root = path.resolve("/");
if (fs.existsSync(path.join(root, "input.txt"))) {
  console.log("The file exists in the filesystem root.");
} else {
  console.log("The file does not exist in the filesystem root.");
}

if (fs.existsSync(path.join(root, "docs"))) {
  console.log("The directory exists in the filesystem root.");
} else {
  console.log("The directory does not exist in the filesystem root.");
}
