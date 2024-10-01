const fs = require("fs").promises;

async function mkdir(path) {
  try {
    await fs.access(path);
  } catch (err) {
    // If the error message indicates that the file does not exist, create it.
    if (err.message.includes("ENOENT")) {
      const parentDir = path.substring(0, path.lastIndexOf("/"));
      await fs.mkdir(parentDir);
      await fs.mkdir(path);
    } else throw err;
  }
}

// This will call mkdir with the first command line argument and log any errors or success messages to stdout.
mkdir(process.argv[2])
  .then(() => console.log("directory created successfully"))
  .catch((err) => {
    console.error(`couldn't create directory: ${process.argv[2]}`);
    console.error(err);
  });
