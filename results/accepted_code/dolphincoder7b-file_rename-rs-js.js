const fs = require("fs"); // Importing the 'fs' module from Node.js's built-in file system module

// Main function
function main() {
  const err = "File move error";

  // Moving 'input.txt' to 'output.txt' in the current working directory
  fs.renameSync("input.txt", "output.txt");

  // Moving 'docs' to 'mydocs' in the current working directory
  fs.renameSync("docs", "mydocs");

  // Moving '/input.txt' to '/output.txt' at the root of the filesystem
  try {
    fs.renameSync("/input.txt", "/output.txt");
  } catch (error) {
    console.log(`Error: ${err}`);
  }

  // Moving '/docs' to '/mydocs' at the root of the filesystem
  try {
    fs.renameSync("/docs", "/mydocs");
  } catch (error) {
    console.log(`Error: ${err}`);
  }
}
