const fs = require("fs").promises;

async function createFilesAndDirs() {
  try {
    await Promise.all([
      fs.writeFile("output.txt", ""),
      fs.writeFile(process.env.HOME + "/output.txt", ""), // For Unix-based systems (like Linux or macOS), you can use process.env.HOME for the root directory.
      fs.mkdir("docs"),
      fs.mkdir(process.env.HOME + "/docs"), //For Unix-based systems create an empty directory 'docs' in home directory root.
    ]);
  } catch (error) {
    console.error(`Got an error trying to write to a file: ${error.message}`);
  }
}

createFilesAndDirs();
