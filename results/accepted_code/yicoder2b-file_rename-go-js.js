const fs = require("fs");

function renameFilesAndDirs(from, to) {
  if (!fs.existsSync(from)) {
    console.log(`No file or directory '${from}'`);
    return; // Exit if the source does not exist
  }
  try {
    // Rename files/directories in both "here" and "/filesystem root"
    fs.renameSync(from, to);
    console.log(`Rename '${from}' to '${to}'`);
  } catch (error) {
    console.log("Error renaming file or directory: ", error);
  }
}

// Call the function with the source and destination paths you want to rename
renameFilesAndDirs("input.txt", "output.txt");
renameFilesAndDirs("docs", "mydocs");
