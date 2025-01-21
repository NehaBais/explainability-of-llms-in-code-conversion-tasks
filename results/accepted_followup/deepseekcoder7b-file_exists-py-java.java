import java.nio.file.*;

Path path1 = Paths.get("input.txt");
Path path2 = Paths<｜begin▁of▁sentence｜>.get("docs");
FileSystem fs = FileSystems.getDefault();
if (Files.exists(path1, LinkOption.NOFOLLOW_LINKS)) {
    if (Files.isRegularFile(path1, LinkOption.NOFOLLOW_LINKS)) {
        System.out.println("File input.txt exists in the current working directory");
    }
} 
if (Files.exists(path2, LinkOption.NOFOLLOW_LINKS)) {
    if (Files.isDirectory(path2, LinkOption.NOFOLLOW_LINKS)) {
        System.out.println("Directory docs exists in the current working directory");
    }
} 
Path path3 = Paths.get("/input.txt");
Path path4 = Paths.get("/docs");
if (Files.exists(path3, LinkOption.NOFOLLOW_LINKS)) {
    if (Files.isRegularFile(path3, LinkOption.NOFOLLOW_LINKS)) {
        System.out.println("File /input.txt exists in the filesystem root");
    }
} 
if (Files.exists(path4, LinkOption.NOFOLLOW_LINKS)) {
    if (Files.isDirectory(path4, LinkOption.NOFOLLOW_LINKS)) {
        System.out.println("Directory /docs exists in the filesystem root");
    }
}