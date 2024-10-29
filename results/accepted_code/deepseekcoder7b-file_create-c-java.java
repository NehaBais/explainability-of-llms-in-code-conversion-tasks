import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) throws IOException { 
        File file1 = new File("output.txt");
        if (file1.createNewFile()) { // create a new empty file called "output.txt"
            Files.setPosixFilePermissions(Paths.get("output.txt"), java.nio.file.attribute.PosixFilePermission.OWNER_READ, 
                                          java.nio.file.attribute.PosixFilePermission.OWNER_WRITE); // permissions: rw-r-----
        }
        
        File file2 = new File("/docs");
        if (file2.mkdir()) { // create a directory called "docs" 
            Files.setPosixFilePermissions(Paths.get("/docs"), java.nio<｜begin▁of▁sentence｜>ile.attribute.PosixFilePermission.OWNER_READ, 
                                          java.nio.file.attribute.PosixFilePermission.OWNER_WRITE, 
                                          java.nio.file.attribute.PosixFilePermission.OWNER_EXECUTE); // permissions: rwxr-x---
        }        
    }  
}