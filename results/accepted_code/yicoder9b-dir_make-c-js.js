const fs = require("fs");
const path = require("path");

function createDirectory(targetDir) {
  // Split the directory path into segments
  const baseDir = path.parse(targetDir).root;
  const dirsToCreate = targetDir.split(path.sep);

  let dirPath = "";
  for (const currentDir of dirsToCreate) {
    dirPath += path.sep + currentDir;

    // Check if the directory exists, create it if not
    if (!fs.existsSync(dirPath)) {
      try {
        fs.mkdirSync(dirPath);
      } catch (err) {
        throw new Error(`Couldn't create directory ${targetDir}`);
      }
    } else {
      // Check if the path isn't a file
      const stats = fs.statSync(dirPath);
      if (!stats.isDirectory()) {
        throw new Error(
          `Can't create directory, a file with same name exists: ${targetDir}`,
        );
      }
    }
  }
}

try {
  createDirectory("./path/to/dir");
} catch (err) {
  console.error(err.message);
}
