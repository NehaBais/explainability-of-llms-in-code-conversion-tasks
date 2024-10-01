const fs = require("fs");
const path = require("path");

function createFile(dirPath) {
  const filePath = path.join(dirPath, "output.txt");
  try {
    fs.writeFileSync(filePath, "", { mode: 0o640 });
    console.log(`Created output.txt in ${dirPath}`);
  } catch (err) {
    console.error(err);
  }
}

function createDirectory(dirPath) {
  const dir = path.join(dirPath, "docs");
  try {
    fs.mkdirSync(dir, { mode: 0o750 });
    console.log(`Created docs in ${dirPath}`);
  } catch (err) {
    console.error(err);
  }
}

const here = process.cwd();
const root = "/";

createFile(here);
createDirectory(here);

if (process.platform !== "win32") {
  createFile(root);
  createDirectory(root);
}
