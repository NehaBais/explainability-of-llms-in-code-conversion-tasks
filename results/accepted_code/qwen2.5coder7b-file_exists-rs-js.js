const fs = require("fs");
const path = require("path");

const filesToCheck = ["input.txt", "docs", "/input.txt", "/docs"];

filesToCheck.forEach((file) => {
  const filePath = file.startsWith("/") ? path.join("/", file) : file;
  fs.stat(filePath, (err, stats) => {
    if (err && err.code === "ENOENT") {
      console.log(`${file} does not exist`);
    } else if (stats.isDirectory()) {
      console.log(`${file} is a directory`);
    } else {
      console.log(`${file} is a file`);
    }
  });
});
