const fs = require("fs");

function main() {
  const filesAndDirectories = ["input.txt", "docs", "/input.txt", "/docs"];

  for (const fileOrDirectory of filesAndDirectories) {
    try {
      const stats = fs.statSync(fileOrDirectory);
      if (stats.isFile()) {
        console.log(`${fileOrDirectory} is a file`);
      } else if (stats.isDirectory()) {
        console.log(`${fileOrDirectory} is a directory`);
      } else {
        console.log(`${fileOrDirectory} does not exist`);
      }
    } catch (err) {
      console.error(`Error occurred: ${err}`);
    }
  }
}
