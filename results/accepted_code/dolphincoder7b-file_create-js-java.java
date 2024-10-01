try {
       // Create an empty file named "output.txt" in the current working directory
       Files.write(Paths.get("./output.txt"), new byte[0]);

       // Create an empty directory named "docs" at the root of the filesystem
       Files.createDirectory(Paths.get("/docs"));

       // Create an empty file named "output.txt" at the root of the filesystem
       Files.write(Paths.get("/output.txt"), new byte[0]);

       // Create an empty directory named "docs" in the current working directory
       Files.createDirectory(Paths.get("./docs"));
   } catch (IOException e) {
       System.err.println("An error occurred: " + e);
   }