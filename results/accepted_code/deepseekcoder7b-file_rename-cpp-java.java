import java.io.File;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) throws Exception{
        File currentDir = new File("."); //get the current working directory
        
        // rename in current dir
        Files.move(Paths.get("input.txt"), Paths.get("output.txt"));
        Files.move(Paths<｜begin▁of▁sentence｜>("docs"), Paths.get("mydocs"));
        
        // reset to the root directory ("/") before renaming 
        File rootDir = new File("/");
        currentDir.setCurrentDir(rootDir.getAbsolutePath());
        
        // rename in root dir
        Files.move(Paths.get("/input.txt"), Paths.get("/output.txt"));
        Files.move(Paths.get("/docs"), Paths.get("/mydocs"));
    }
}