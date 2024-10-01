const fs = require("fs");
const path = require("path");

async function create(root, fileName = "output.txt", dirName = "docs") {
  const fPath = path.join(root, fileName);
  const dPath = path.join(root, dirName);

  try {
    await fs.promises.mkdir(dPath);
    await fs.promises.open(fPath, "w");
    return;
  } catch (err) {
    throw err;
  }
}

async function main() {
  try {
    await create(process.cwd());
    await create("/");
  } catch (err) {
    console.error("Error: ", err.message);
    process.exit(1);
  }
}

main();
