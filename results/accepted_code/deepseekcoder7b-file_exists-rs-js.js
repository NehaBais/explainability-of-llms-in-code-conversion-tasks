const fs = require("fs");

function checkFileOrDirectory(file) {
  fs.stat(file, (error, stats) => {
    if (error) {
      console.log(`${file} does not exist`);
    } else {
      if (stats.isDirectory()) {
        console.log(`${file} is a directory`);
      } else {
        console.log(`${file} is a file`);
      }
    }
  });
}

["input.txt", "docs", "/input.txt", "/docs"].forEach((file) =>
  checkFileOrDirectory(file),
);
