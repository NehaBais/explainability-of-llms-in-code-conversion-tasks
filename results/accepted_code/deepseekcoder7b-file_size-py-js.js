const fs = require("fs");
const path = require("path");

function checkSize(filePath) {
  fs.stat(filePath, (err, stats) => {
    if (err) {
      console.log(`Error occurred while accessing the file: ${err}`);
      return;
    }
    console.log(`File size in bytes: ${stats.size}`);
  });
}

// Assuming input.txt is in the current working directory
let currentDirPath = path.resolve("input.txt"); // Node.js will automatically look for file in current dir, same as Python's 'os.path.getsize('input.txt')'.
checkSize(currentDirPath);

// Assuming input.txt is at the root of the file system ('/'), you have to provide full path here.
let fsRootPath = path.resolve("/input.txt"); // You need to provide absolute path, same as Python's 'os.path.getsize('/input.txt')'.
checkSize(fsRootPath);
