const path = require("path");

function checkForFileAndDirectory(dirOrFilePath) {
  try {
    const stats = fs.statSync(dirOrFilePath);

    if (stats.isFile()) {
      console.log(`${dirOrFilePath} is a file`);
    } else if (stats.isDirectory()) {
      console.log(`${dirOrFilePath} is a directory`);
    }
  } catch (err) {
    console.error(`Error checking for ${dirOrFilePath}:`, err.message);
  }
}

checkForFileAndDirectory("input.txt");
checkForFileAndDirectory("/input.txt");
checkForFileAndDirectory("docs");
checkForFileAndDirectory("/docs");
