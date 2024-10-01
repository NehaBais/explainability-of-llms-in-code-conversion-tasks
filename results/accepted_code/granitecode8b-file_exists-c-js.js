const fs = require("fs");
const path = require("path");
// Check if input.txt exists in the current working directory
if (fs.existsSync(path.join(__dirname, "input.txt"))) {
  console.log("input.txt exists in the current working directory.");
} else {
  console.log("input.txt does not exist in the current working directory.");
}
// Check if docs exists in the current working directory
if (fs.existsSync(path.join(__dirname, "docs"))) {
  console.log("docs exists in the current working directory.");
} else {
  console.log("docs does not exist in the current working directory.");
}
// Check if input.txt exists in the filesystem root
if (fs.existsSync("/input.txt")) {
  console.log("input.txt exists in the filesystem root.");
} else {
  console.log("input.txt does not exist in the filesystem root.");
}
// Check if docs exists in the filesystem root
if (fs.existsSync("/docs")) {
  console.log("docs exists in the filesystem root.");
} else {
  console.log("docs does not exist in the filesystem root.");
}
