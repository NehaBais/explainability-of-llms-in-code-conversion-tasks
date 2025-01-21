const fs = require("fs");

// Function to check if a file exists and is a directory
function checkFileExists(dirPath, fileName) {
  const filePath = dirPath + "/" + fileName;

  fs.stat(filePath, function (err, stats) {
    if (err) throw err;

    if (stats.isFile()) {
      console.log(
        filePath + " exists with a size of " + stats.size + " bytes.",
      );
    } else if (stats.isDirectory()) {
      console.log(filePath + " is a directory");
    } else {
      console.log(filePath + " does not exist");
    }
  });
}

// Check in the current working directory
checkFileExists(".", "input.txt");
checkFileExists(".", "zero_length.txt");

// Check in the root filesystem (typically '/' on Unix-like systems)
checkFileExists("/", "docs/input.txt");
checkFileExists("/", "docs/zero_length.txt");
