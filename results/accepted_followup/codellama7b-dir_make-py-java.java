// Enable implicitly declared classes
--enable-preview

public static void mkdirp(String path) {
    File dir = new File(path);
    if (!dir.exists()) {
        dir.mkdirs();
    }
}