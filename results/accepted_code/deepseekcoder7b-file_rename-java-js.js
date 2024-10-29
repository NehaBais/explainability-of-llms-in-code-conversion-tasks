const fs = require("fs");
const path = require("path");

function renameFile(oldPath, newPath) {
  return new Promise((resolve, reject) => {
    fs.rename(oldPath, newPath, (err) => {
      if (err) reject(err);
      else resolve();
    });
  });
}

async function test(type, oldName, newName) {
  try {
    await renameFile(oldName, newName);
    console.log(
      `The following ${type} called ${oldName} was renamed as ${newName}.`,
    );
  } catch (err) {
    console.error(
      `Failed to rename the following ${type} called ${oldName}: ${err}`,
    );
  }
}

async function main() {
  await test("file", "input.txt", "output.txt");
  await test("directory", path.join("docs"), path.join("mydocs"));
}
main();
