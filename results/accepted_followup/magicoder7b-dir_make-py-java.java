import java.io.IOException;
import java.nio.file.*;

public void mkdirp(String path) throws IOException {
    Files.createDirectories(Paths.get(path));
}