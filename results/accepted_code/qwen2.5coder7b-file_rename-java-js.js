const fs = require("fs");
const path = require("path");

function renameItem(oldName, newName) {
  try {
    // Rename file or directory
    fs.renameSync(path.resolve(oldName), path.resolve(newName));
    console.log(
      `The following item called ${oldName} was renamed as ${newName}.`,
    );
    return true;
  } catch (error) {
    console.error(`Error renaming ${oldName}:`, error);
    return false;
  }
}

function test(type, oldname, newname) {
  console.log(`Testing rename of ${type} '${oldname}' to '${newname}'.`);
  const success = renameItem(oldname, newname);
  if (!success) {
    // Revert the rename in case it failed
    fs.renameSync(path.resolve(newname), path.resolve(oldname));
  }
}

function main() {
  test("file", "input.txt", "output.txt");
  test("file", `${path.sep}input.txt`, `${path.sep}output.txt`);
  test("directory", "docs", "mydocs");
  test(
    "directory",
    `${path.sep}docs${path.sep}`,
    `${path.sep}mydocs${path.sep}`,
  );
}

main();
