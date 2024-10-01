const fs = require("fs");
const path = require("path");

function main() {
  let fileNames = process.argv.slice(2);
  if (!fileNames.length) {
    console.error("No file name supplied");
    return process.exit(1);
  }

  fileNames.forEach((fileName, index) => {
    try {
      let stats = fs.statSync(path.resolve(fileName));
      console.log(`Size of ${fileName} is ${stats.size} bytes`);
    } catch (error) {
      if (error.code === "ENOENT") {
        console.error(`File ${fileName} does not exist`);
      } else {
        console.error(`Error: ${error.message}`);
      }
      return process.exit(2);
    }
  });
}

main();
