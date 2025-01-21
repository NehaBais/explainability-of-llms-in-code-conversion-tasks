// Importing the fs module to handle file and directory operations
const fs = require("fs");
const path = require("path");

function createFile(dirPath, fileName) {
  // Checking if the directory exists, if not creating it
  try {
    if (!fs.existsSync(dirPath)) {
      fs.mkdirSync(dirPath);
    }
    // Creating a file with zero size in the specified directory and file name
    const filePath = path.join(dirPath, fileName);
    fs.writeFileSync(filePath, "");
  } catch (error) {
    console.error(`Error creating file: ${error.message}`);
  }
}

// Calling the createFile function twice for "output.txt" and "docs"
createFile(path.resolve(__dirname), "output.txt");
createFile(path.resolve("/", "docs"));
