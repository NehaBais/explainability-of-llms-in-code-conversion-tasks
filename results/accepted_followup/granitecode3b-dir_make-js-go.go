func mkdirp(path string) error {
	if err := os.MkdirAll(path, 0755); err != nil {
		switch e := err.(type) {
		case *os.PathError:
		// handle specific path errors here
		default:
			return fmt.Errorf("failed to create directory %s: %v", path, err)
		}
	}
	return nil
}