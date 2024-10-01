const fs = require("fs").promises;
const path = require("path");

async function renameFiles() {
  try {
    await fs.rename(path.resolve("./input.txt"), "output.txt");
    await fs.rename(path.resolve("./docs"), "mydocs");
    await fs.rename("/full/path/to/input.txt", "/full/path/to/output.txt");
    await fs.rename("/full/path/to/docs", "/full/path/to/mydocs");
  } catch (err) {
    console.error(`Error renaming files: ${err}`);
  }
}

renameFiles();
