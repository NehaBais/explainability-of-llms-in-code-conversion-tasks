const fs = require("fs");
const path = require("path");

function createFileAndDirectory(directory) {
  try {
    // Create an empty file
    fs.openSync(`${directory}/output.txt`, "w");
    console.log("Successfully created output.txt in " + directory);

    // Create a new directory
    fs.mkdirSync(path.join(directory, "docs"), 0o750);
    console.log("Successfully created docs in " + directory);
  } catch (err) {
    console.error("Error: ", err);
  }
}

// Create directories here and filesystem root
createFileAndDirectory("."); // for the current working directory
createFileAndDirectory(path.resolve("/")); // for the root of the file system
