const fs = require("fs");
const path = require("path");

const FILE_NAME = "output.txt";
const DIR_NAME = "docs";

main();

function main() {
  create(".")
    .then(() => create("/"))
    .catch(errorHandler);
}

function create(root) {
  let fPath = path.join(root, FILE_NAME);
  let dPath = path.join(root, DIR_NAME);

  return Promise.all([
    fs.promises.mkdir(dPath),
    fs.promises.writeFile(fPath, ""),
  ]);
}

function errorHandler(error) {
  console.log("Error: " + error);
  process.exit(1);
}
