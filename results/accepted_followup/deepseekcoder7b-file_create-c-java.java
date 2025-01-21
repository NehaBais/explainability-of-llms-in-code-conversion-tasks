import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main  {
    public static void main(String[] args) throws IOException {  
        File file1 = new File("output.txt");
        if (file1.createNewFile()) {  
            Files.setPosixFilePermissions(Paths.get("output.txt"), java.nio.file.attribute.PosixFilePermission.OWNER_READ, java.nio.file.attribute.PosixFilePermission.OWNER_WRITE); 
        }
        
        File file2 = new File("/docs");
        if (file2.mkdir()) {  
            Files.setPosixFilePermissions(Paths<｜begin▁of▁sentence｜>get("/docs"), java.nio.file.attribute.PosixFilePermission.OWNER_READ, java.nio.file.attribute.PosixFilePermission.OWNER_WRITE, java.nio.file.attribute.PosixFilePermission.OWNER_EXECUTE); 
        }
    }
}