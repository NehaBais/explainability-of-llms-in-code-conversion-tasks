const fs = require("fs");
const path = require("path");

const fileName = process.argv[2];

if (!fileName) {
  console.error("Error: No file name supplied");
  process.exit(1);
}

const filePath = path.join(__dirname, fileName);
const rootFilePath = path.join("/", fileName);

try {
  const fileStats = fs.statSync(filePath);
  const rootFileStats = fs.statSync(rootFilePath);

  console.log(
    `Size of ${fileName} in current working directory is ${fileStats.size} bytes`,
  );
  console.log(
    `Size of ${fileName} in file system root is ${rootFileStats.size} bytes`,
  );
} catch (error) {
  console.error(`Error: ${error}`);
  process.exit(2);
}
