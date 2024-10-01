const fs = require("fs");

function verifyFileAndDirectoryExistence() {
  const cwd = process.cwd(); // get current working directory
  checkFileAndDirectory(cwd + "/input.txt", "is a file");
  checkFileAndDirectory(cwd + "/docs", "is a directory");

  const rootDir = "/"; // root directory in the filesystem
  checkFileAndDirectory(rootDir + "/input.txt", "is a file");
  checkFileAndDirectory(rootDir + "/docs", "is a directory");
}

function checkFileAndDirectory(filePath, type) {
  fs.stat(filePath, (err, stats) => {
    if (err) {
      console.log(`${filePath} does not exist`);
    } else {
      console.log(`${filePath} is ${type}`);
    }
  });
}

verifyFileAndDirectoryExistence();
