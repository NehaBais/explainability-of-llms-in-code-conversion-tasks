const fs = require("fs");
const path = require("path");

const FILE_NAME = "output.txt";
const DIR_NAME = "docs";

function create(root) {
  const fPath = path.join(root, FILE_NAME);
  const dPath = path.join(root, DIR_NAME);

  if (!fs.existsSync(dPath)) {
    fs.mkdirSync(dPath);
  }

  fs.writeFileSync(fPath, "");
}

function main() {
  create(".") || errorHandler(`Error creating files in ${process.cwd()}`, 1);
  create("/") || errorHandler(`Error creating files in root`, 1);
}

function errorHandler(errorMessage, code) {
  console.error(errorMessage);
  process.exit(code);
}

main();
