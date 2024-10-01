const fs = require("fs");
const path = require("path");

function fileExists(filePath) {
  console.log(filePath);
  try {
    if (fs.existsSync(filePath)) {
      const stats = fs.statSync(filePath);
      if (stats.isDirectory()) {
        console.log(" is a directory\n");
      } else {
        console.log(` exists with a file size of ${stats.size} bytes.\n`);
      }
    } else {
      console.log(" does not exist\n");
    }
  } catch (err) {
    console.error(err);
  }
}

function main() {
  fileExists("./input.txt");
  fileExists("./zero_length.txt");
  fileExists(path.join(__dirname, "docs", "input.txt"));
  fileExists(path.join(__dirname, "docs", "zero_length.txt"));

  // Repeat for root
  fs.realpath("/", (err, rootDir) => {
    if (err) throw err;
    fileExists(path.join(rootDir, "input.txt"));
    fileExists(path.join(rootDir, "zero_length.txt"));
  });
}

main();
