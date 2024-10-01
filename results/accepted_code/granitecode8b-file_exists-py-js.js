// Verifying file and directory existance in the current working directory
const fs = require("fs");
const path = require("path");
const cwd = process.cwd(); // Get the current working directory
const inputFilePath = path.join(cwd, "input.txt");
const docsPath = path.join(cwd, "docs");
if (fs.existsSync(inputFilePath) && fs.existsSync(docsPath)) {
  console.log(
    "Input file and directory exist in the current working directory",
  );
} else {
  console.log(
    "Input file or directory does not exist in the current working directory",
  );
}
// Verifying file and directory existance in the filesystem root
const inputFilePathRoot = "/input.txt";
const docsPathRoot = "/docs";
if (fs.existsSync(inputFilePathRoot) && fs.existsSync(docsPathRoot)) {
  console.log("Input file and directory exist in the filesystem root");
} else {
  console.log("Input file or directory does not exist in the filesystem root");
}
