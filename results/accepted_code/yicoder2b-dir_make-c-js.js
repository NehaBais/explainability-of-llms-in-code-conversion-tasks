const fs = require("fs");
const path = require("path");

function createDirectory(directory) {
  // Check if the directory exists
  if (!fs.existsSync(directory)) {
    // Create a new directory
    try {
      fs.mkdirSync(directory, { recursive: true });
    } catch (error) {
      console.log("Error creating directory", error);
    }
  }
}

const dir = "/path/to/dir"; // You can replace this with the actual path you want
createDirectory(dir);
