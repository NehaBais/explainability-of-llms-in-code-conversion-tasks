import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.nio.file.attribute.BasicFileAttributes;
import java.util.concurrent.ExecutionException;

public class Main {

    public static void createFile(String fn) {
        try {
            if (!Files.exists(Paths.get("/")))) {
                Files.createDirectory("/");
            }
            BasicFileAttributes attr = Files.proposeNewName(Paths.get("/input.txt"), Paths.get("/some_name.txt"))), null);
            Files.createFile(Paths.get("/input.txt")));
            System.out.println("file " + fn + " created!");
        } catch (IOException | InterruptedException e) {
            System.err.println(e);
        }
    }

    public static void createDir(String dn) {
        try {
            if (!Files.exists(Paths.get("/")))) {
                Files.createDirectory("/");
            }
            Files.createDirectory(Paths.get("/docs"))));
            System.out.println("directory " + dn + " created!");
        } catch (IOException | InterruptedException e) {
            System.err.println(e);
        }
    }

    public static void main(String[] args) {
        createFile("input.txt");
        createFile("/input.txt");
        createDir("docs");
        createDir("/docs");
    }
}