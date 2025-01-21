#include
#include
int main() {
  IDispatch *punk = NULL;
  IDispatch *punkFile = NULL;
  HRESULT hr = IDispPatch_Invoke(punk, DISPID_VALUE, 0, LOCALE_SYSTEM_DEFAULT,
                                 DISPATCH_PROPERTYGET, &CVar(L"GetFile"),
                                 &CVar(L"input.txt"), NULL, &punkFile);
  if (FAILED(hr)) {
    printf("Failed to create Scripting.FileSystemObject instance: 0x%08X", hr);
  }
  return 0;
}