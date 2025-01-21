use libc::struct_stat;
let mut foo = unsafe { std::mem::MaybeUninit::uninit().assume_init() };
let res = unsafe { libc::stat("file.txt".as_ptr(), &mut foo) };
if res != 0 {
    // handle error
}
let file_size = (foo.st_size as *const _) as usize;