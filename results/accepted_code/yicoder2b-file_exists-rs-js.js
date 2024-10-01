const fs = require("fs");

function checkFileAndDir(filepath) {
  try {
    let stats = fs.lstatSync(filepath);
    if (stats.isDirectory()) {
      console.log(`${filepath} is a directory`);
    } else {
      console.log(`${filepath} is a file`);
    }
  } catch (err) {
    if (err.code === "ENOENT") {
      console.log(`${filepath} does not exist`);
    } else {
      throw err;
    }
  }
}

checkFileAndDir("input.txt"); // For the current directory
checkFileAndDir("/input.txt"); // For the root filesystem
