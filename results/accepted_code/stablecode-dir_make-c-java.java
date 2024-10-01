import java.io.IOException;
import java.nio.file.FileVisitResult;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.SimpleFileVisitor;
import java.nio.file.attribute.BasicFileAttributes;
import java.util.concurrent.locks.ReentrantLock;

public class Main {

    private static ReentrantLock lock = new ReentrantLock();

    public static void main(String[] args) throws IOException {
        Path path = Paths.get("./path/to/dir");
        if (!Files.exists(path)) {
            lock.lock();
            try {
                if (!Files.exists(path))) {
                    Files.createDirectories(path);
                }
            } finally {
                lock.unlock();
            }
        }
    }
}