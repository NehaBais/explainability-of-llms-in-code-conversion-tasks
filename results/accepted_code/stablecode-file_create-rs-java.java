import java.io.*;
import java.nio.file.*;
import static java.nio.file.StandardCopyOption.*;

public class Main {

    static final String FILE_NAME = "output.txt";
    static final String DIR_NAME  = "docs";

    public static void main(String[] args) throws IOException, InterruptedException {
        create(".", File::create).and(create("/", null))
                .unwrapOrElseThrow(e -> new RuntimeException("Error: " + e.getMessage(), e)), 1);
    }

    private static <T> T create(String root, ThrowingFunction<Path, T> function) throws IOException, InterruptedException {
        Path f_path = Paths.get(root).resolveSibling(FILE_NAME));
        Path d_path = Paths.get(root).resolveSibling(DIR_NAME));

        return function.apply(f_path);
    }

    @FunctionalInterface
    private interface ThrowingFunction<Arg, Result> {
        Result apply(Arg arg) throws Exception;
    }
}