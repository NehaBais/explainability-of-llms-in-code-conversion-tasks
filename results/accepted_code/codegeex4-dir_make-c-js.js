const fs = require("fs").promises;
const path = require("path");

async function mkdirRecursive(dirPath) {
  // Check if the directory already exists, if not, create it recursively
  try {
    await fs.access(dirPath);
    console.log(`Directory ${dirPath} already exists.`);
  } catch (err) {
    const parentDir = path.dirname(dirPath);
    if (parentDir !== dirPath) {
      // Create the parent directory first if it doesn't exist
      await mkdirRecursive(parentDir);
    }
    await fs.mkdir(dirPath, { recursive: true });
    console.log(`Directory ${dirPath} created successfully.`);
  }
}

// Example usage:
mkdirRecursive("./path/to/dir").catch((err) =>
  console.error("Error creating directory:", err),
);
