const fs = require("fs");
const path = require("path");
function renameFile(oldPath, newPath) {
  try {
    fs.renameSync(oldPath, newPath);
    console.log(`Renamed ${oldPath} to ${newPath}`);
  } catch (err) {
    console.error(`Error renaming ${oldPath}: ${err.message}`);
  }
}
const err = "File move error";
renameFile("input.txt", "output.txt");
renameFile("docs", "mydocs");
const rootPath = path.parse("/").root;
renameFile(path.join(rootPath, "input.txt"), path.join(rootPath, "output.txt"));
renameFile(path.join(rootPath, "docs"), path.join(rootPath, "mydocs"));
