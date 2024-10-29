import java.io.File;
import java.nio.file.*;

public class Main {
    
    private static void printStat(String path) {
        File f = new File(path);
        
        if (f.exists()) {
            if (f.isDirectory()) {
                System.out.println(path + " is a directory");
            } else {
                System.out<｜begin▁of▁sentence｜>.prinln(path + " is a file");
            }
        } else {
            System.out.println("Path does not exist: " + path);
        }
    }
    
    public static void main(String[] args)  {
        printStat("input.txt");
        
        Path root = FileSystems.getDefault().getRootDirectories().iterator().next();
        printStat(root.resolve("input.txt").toString());
        
        printStat("docs");
        
        printStat(root.resolve("docs").toString());
    }
}