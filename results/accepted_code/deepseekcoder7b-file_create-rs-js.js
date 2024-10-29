const fs = require("fs");
const path = require("path");
process.on("unhandledRejection", (error) => {
  console.error(`Error: ${error}`);
  process.exit(1);
});

const FILE_NAME = "output.txt";
const DIR_NAME = "docs";

async function createDirAndFile(root) {
  const fPath = path.join(root, FILE_NAME);
  const dPath = path.join(root, DIR_NAME);

  fs.promises
    .mkdir(dPath)
    .then(() => console.log("Directory created"))
    .catch((error) => errorHandler(error, 2));
  fs.promises
    .open(fPath, "w")
    .then(() => console.log("File Created"))
    .catch((error) => errorHandler(error, 3));
}

function errorHandler(error, code) {
  console.error(`Error: ${error.message}`);
  process.exit(code);
}

createDirAndFile(".")
  .then(() => console.log("Done"))
  .catch((error) => errorHandler(error, 1));
