const fs = require("fs");
const path = require("path");

const files = ["input.txt", "docs", "/input.txt", "/docs"];

files.forEach((file) => {
  fs.stat(file, (err, stats) => {
    if (!err && stats.isDirectory()) {
      console.log(`${file} is a directory`);
    } else if (!err && !stats.isDirectory()) {
      console.log(`${file} is a file`);
    } else {
      console.log(`${file} does not exist`);
    }
  });
});
