#include
int main() {
  IDispatch *punk = NULL;
  HRESULT hr = CoCreateInstance(CLSID_ScriptingFileSystemObject, NULL,
                                CLSCTX_INPROC_SERVER, IID_IDispatch, &punk);
  if (FAILED(hr)) {
    printf("Failed to create Scripting.FileSystemObject instance: 0x%08X", hr);
    return -1;
  }

  IDispatch *punkFile = NULL;
  hr = IDispPatch_Invoke(punk, DISPID_VALUE, 0, LOCALE_SYSTEM_DEFAULT,
                         DISPATCH_PROPERTYGET, &CVar(L"GetFile"),
                         &CVar(L"input.txt"), NULL, &punkFile);
  if (FAILED(hr)) {
    printf("Failed to get input.txt file: 0x%08X", hr);
    return -1;
  }

  long size = 0;
  hr = IDispPatch_Get(punkFile, L"Size", &size);
  if (FAILED(hr)) {
    printf("Failed to get input.txt size: 0x%08X", hr);
    return -1;
  }

  printf("input.txt size is %ld bytesn", size);

  // Repeat the same process for c:/input.txt file
  hr = IDispPatch_Invoke(punk, DISPID_VALUE, 0, LOCALE_SYSTEM_DEFAULT,
                         DISPATCH_PROPERTYGET, &CVar(L"GetFile"),
                         &CVar(L"c:/input.txt"), NULL, &punkFile);
  if (FAILED(hr)) {
    printf("Failed to get c:/input.txt file: 0x%08X", hr);
    return -1;
  }

  hr = IDispPatch_Get(punkFile, L"Size", &size);
  if (FAILED(hr)) {
    printf("Failed to get c:/input.txt size: 0x%08X", hr);
    return -1;
  }

  printf("c:/input.txt size is %ld bytesn", size);

  // Cleanup
  IDispPatch_Release(punkFile);
  IDispPatch_Release(punk);
  return 0;
}