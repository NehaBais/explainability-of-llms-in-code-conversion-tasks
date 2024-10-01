const fs = require("fs");
const path = require("path");
const { stat } = fs.promises;
async function getFileSize(filePath) {
  try {
    const stats = await stat(filePath);
    return stats.size;
  } catch (error) {
    console.error(`Error getting file size for ${filePath}: ${error.message}`);
    return -1;
  }
}
const cwd = process.cwd();
const root = "/";
async function main() {
  const inputFile = path.join(cwd, "input.txt");
  const inputFileSize = await getFileSize(inputFile);
  console.log(`File size for ${inputFile}: ${inputFileSize}`);

  const rootInputFile = path.join(root, "input.txt");
  const rootInputFileSize = await getFileSize(rootInputFile);
  console.log(`File size for ${rootInputFile}: ${rootInputFileSize}`);
}
main();
