const fs = require("fs");
const path = require("path");
function createEmptyFileAndDirectory(filePath) {
  try {
    const data = "";
    // Create an empty file
    fs.writeFileSync(filePath, data);
    // Create a directory
    fs.mkdirSync(path.join(filePath, "docs"));
    console.log(`File and directory created successfully at ${filePath}`);
  } catch (err) {
    console.error("Error creating file or directory:", err);
  }
}
// Call the function twice: once in the current working directory and once in the filesystem root
createEmptyFileAndDirectory(__dirname); // __dirname is a Node.js global variable that represents the current working directory
createEmptyFileAndDirectory("/");
