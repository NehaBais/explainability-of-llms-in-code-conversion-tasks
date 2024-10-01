```
import pathlib
from pathlib import Path
dir = (Path(__file__).parent / '../test/').resolve()
# Create a directory named test in the parent of this file if it doesn't already exist
mkdirp(str(dir))
print(f"Directory {dir} created")
```

