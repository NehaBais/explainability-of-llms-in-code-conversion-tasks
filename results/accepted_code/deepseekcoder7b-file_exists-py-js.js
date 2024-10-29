const fs = require("fs").promises; // node v14+, use fs in node v12-
const path = require("path");

async function checkFileAndDirectoryExists(filePath) {
  try {
    const stat = await fs.stat(filePath);

    if (await fs.access(filePath)) {
      // checks file or directory existence
      console.log("The path " + filePath + " exists");

      if (stat.isFile()) {
        console.log("The path " + filePath + " is a file.");
      } else if (stat.isDirectory()) {
        console.log("The path " + filePath + " is a directory.");
      }
    }
  } catch (err) {
    console.error("Error occurred while accessing the provided path: ", err);
  }
}

// Calling function for current working dir and root dir files/directories
checkFileAndDirectoryExists("./input.txt"); // relative to cwd (current working directory)
checkFileAndDirectoryExists("/input.txt"); // from filesystem root
checkFileAndDirectoryExists("./docs"); // relative to cwd
checkFileAndDirectoryExists("/docs"); // from filesystem root
