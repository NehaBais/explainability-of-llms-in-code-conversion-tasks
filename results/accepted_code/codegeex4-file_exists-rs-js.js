const fs = require("fs");

function verifyFilesAndDirectories() {
  const pathsToCheck = ["input.txt", "docs", "/input.txt", "/docs"];

  pathsToCheck.forEach((path) => {
    try {
      const stats = fs.statSync(path);
      if (stats.isDirectory()) {
        console.log(`${path} is a directory`);
      } else {
        console.log(`${path} is a file`);
      }
    } catch (err) {
      console.log(`${path} does not exist`);
    }
  });
}

verifyFilesAndDirectories();
