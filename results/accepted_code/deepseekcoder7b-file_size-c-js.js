const fs = require("fs");
const path = require("path");

// Get file size of 'input.txt' in current working directory
fs.stat("./input.txt", (err, stats) => {
  if (!err) {
    console.log(stats.size);
  } else {
    console.log("An error occurred while trying to read the file.");
  }
});

// Get file size of 'input.txt' in root directory
fs.stat(path.join(__dirname, "../", "input.txt"), (err, stats) => {
  if (!err) {
    console.log(stats.size);
  } else {
    console.log("An error occurred while trying to read the file.");
  }
});
