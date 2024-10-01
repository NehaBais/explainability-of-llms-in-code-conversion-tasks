const fs = require("fs");
const path = require("path");

const FILE_NAME = "output.txt";
const DIR_NAME = "docs";

function main() {
  create(".")
    .then(() => create("/"))
    .catch(errorHandler);
}

async function create(root) {
  const f_path = path.join(root, FILE_NAME);
  const d_path = path.join(root, DIR_NAME);
  try {
    await fs.promises.mkdir(d_path);
    return await fs.promises.writeFile(f_path, "");
  } catch (error) {
    errorHandler(error);
  }
}

function errorHandler(error) {
  console.error("Error:", error);
  process.exit(1);
}
