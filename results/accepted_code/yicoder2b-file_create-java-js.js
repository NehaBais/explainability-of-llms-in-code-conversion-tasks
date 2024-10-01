let fs = require("fs");

function createEmptyFileInCurrentDirAndFilesystemRoot() {
  try {
    // Check if file already exists. If it doesn't, then new empty file will be created
    if (!fs.existsSync("output.txt")) {
      fs.openSync("output.txt", "w");
    } else {
      console.log("File output.txt already exists");
    }

    // Check if file already exists. If it doesn't, then new empty file will be created
    if (!fs.existsSync("output.txt" + "/")) {
      fs.openSync("output.txt/", "w");
    } else {
      console.log("Directory output.txt already exists");
    }
  } catch (e) {
    console.error(`Error: ${e.message}`);
  }
  try {
    // Check if directory already exists. If it doesn't, then new directory will be created
    if (!fs.existsSync("docs")) {
      fs.mkdirSync("docs");
    } else {
      console.log("Directory docs already exists");
    }
  } catch (e) {
    console.error(`Error: ${e.message}`);
  }
}

createEmptyFileInCurrentDirAndFilesystemRoot();
