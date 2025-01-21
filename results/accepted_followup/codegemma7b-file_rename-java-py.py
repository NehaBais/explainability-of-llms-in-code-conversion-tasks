print(
    f"The following {type} called {oldname}"
    f"{' was renamed as ' if rename_file(oldname, newname) else ' could not be renamed into '}{newname}."
)
