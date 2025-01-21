const fs = require("fs");
const path = require("path");

function checkFilesInDirectory(dir) {
  const files = fs.readdirSync(dir).map((file) => path.join(dir, file));

  files.forEach((file) => {
    try {
      if (fs.statSync(file).isDirectory()) {
        console.log(`${file} is a directory`);
      } else {
        console.log(`${file} is a file`);
      }
    } catch (err) {
      console.error(`Error checking ${file}:`, err);
    }
  });
}

checkFilesInDirectory(".");
checkFilesInDirectory("/input.txt");
checkFilesInDirectory("/docs");
