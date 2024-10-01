const fs = require("fs");

function renameFiles() {
  try {
    fs.renameSync("input.txt", "output.txt");
    fs.renameSync("docs", "mydocs");
    fs.renameSync("/input.txt", "/output.txt");
    fs.renameSync("/docs", "/mydocs");
  } catch (err) {
    console.error(err);
  }
}

renameFiles();
