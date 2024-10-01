import java.nio.file.*;

public void mkdirAll(Path path, int permissions) throws IOException {
    Files.createDirectories(path);
}