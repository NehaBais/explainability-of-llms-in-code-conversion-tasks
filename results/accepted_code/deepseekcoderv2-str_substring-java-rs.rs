def convert_to_bytes(value):
    if isinstance(value, str):
        return value.encode('utf-8').hex()
    elif isinstance(value, int):
        return hex(value)[2:]
    else:
        raise TypeError("Unsupported type")