import java.io.File;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {

    private static final String ROOT_PATH = System.getProperty("user.dir")).replace("/", "");
    private static final String HERE_PATH = System.getProperty("user.dir"));

    public static void main(String[] args) throws Exception {

        File outputFileRoot = new File(ROOT_PATH, "output.txt"));
        outputFileRoot.createNewFile();

        Files.createDirectory(Paths.get(HERE_PATH, "docs")));

        Files.createDirectory(Paths.get(ROOT_PATH, "docs"))));
    }
}