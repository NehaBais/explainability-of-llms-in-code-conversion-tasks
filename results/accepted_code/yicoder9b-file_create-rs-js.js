const fs = require("fs").promises;

const FILE_NAME = "output.txt";
const DIR_NAME = "docs";

(async function createFilesAndDirs() {
  try {
    await Promise.all([create("."), create("/")]);
  } catch (error) {
    console.error(`Error: ${error}`);
    process.exit(1);
  }
})();

async function create(root) {
  const fPath = `${root}/${FILE_NAME}`;
  const dPath = `${root}/${DIR_NAME}`;
  return Promise.all([
    fs.mkdir(dPath, { recursive: true }),
    fs.writeFile(fPath, ""),
  ]);
}
