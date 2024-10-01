const fs = require("fs");
const path = require("path");

function renameFile(oldname, newname) {
  try {
    fs.renameSync(oldname, newname);
    return true;
  } catch (error) {
    console.error(`Error renaming ${oldname} to ${newname}:`, error.message);
    return false;
  }
}

function test(type, oldname, newname) {
  const success = renameFile(oldname, newname);
  console.log(
    `The following ${type} called ${oldname}${success ? " was renamed as" : " could not be renamed into"} ${newname}.`,
  );
}

function main() {
  test("file", "input.txt", "output.txt");
  test("file", path.sep + "input.txt", path.sep + "output.txt");

  if (!fs.existsSync("docs")) {
    fs.mkdirSync("docs");
  }
  test("directory", "docs", "mydocs");

  if (process.platform !== "win32") {
    // root directory only on Unix-like systems
    test(
      "directory",
      path.sep + "docs" + path.sep,
      path.sep + "mydocs" + path.sep,
    );
  }
}

main();
