import java.io.IOException;
import java.nio.file.*;

public class Main {
    public static void main(String[] args) throws IOException {
        createFile("./output.txt");
        createFile("/output.txt");

        createDirectory("./docs");
        createDirectory("/docs");
    }

    private static void createFile(String path) throws IOException {
        Path file = Paths.get(path);
        Files.createFile(file, FileAttribute<?>[] {});
    }

    private static void createDirectory(String path) throws IOException {
        Path dir = Paths.get(path);
        Files.createDirectory(dir, FileAttribute<?>[] {});
    }
}