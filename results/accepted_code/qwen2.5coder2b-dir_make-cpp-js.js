const { mkdir } = require("node:fs/promises");
const path = require("path");

async function createDirectory(pathToCreate) {
  try {
    await mkdir(pathToCreate, { recursive: true });
    console.log(`Successfully created directory at ${pathToCreate}`);
  } catch (error) {
    console.error(`Error creating directory: ${error.message}`);
  }
}

const pathToCreate = process.argv[2];
createDirectory(pathToCreate);
