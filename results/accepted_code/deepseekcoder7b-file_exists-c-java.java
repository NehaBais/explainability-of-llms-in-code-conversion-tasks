import java.io.IOException;
import java.nio.file.*;

public class Main {
    public static void main(String[] args) throws IOException{
        System.out.println("input.txt is a regular file? " + Files.isRegularFile(Paths.get("input.txt")));
        System.out.println("docs is a directory? " + Files.isDirectory(Paths.get("docs")));
        System.out.println("/input.txt is a regular file? " + Files.isRegularFile(Paths.get("/input.txt")));
        System.out.println("/docs is a directory? " + Files.isDirectory(Paths<｜begin▁of▁sentence｜>("/docs")));
    }
}