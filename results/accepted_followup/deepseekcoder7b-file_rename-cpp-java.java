File currentDir = new File(".");  //get the current working directory
        
// rename in current dir
Files.move(Paths.get(currentDir.getAbsolutePath(), "input.txt"), Paths.get(currentDir.getAbsolutePath(), "output.txt"));
Files.move(Paths.get(currentDir.getAbsolutePath(), "docs"), Paths.get(currentDir.getAbsolutePath(), "mydocs"));
        
// reset to the root directory ("/") before renaming 
File rootDir = new File("/");  
    
// rename in root dir
Files.move(Paths.get("/input.txt"), Paths.get("/output.txt"));
Files.move(Paths.get("/docs"), Paths.get("/mydocs"));