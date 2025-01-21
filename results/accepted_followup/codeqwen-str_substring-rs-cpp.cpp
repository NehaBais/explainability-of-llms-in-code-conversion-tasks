std::u32string s = u32 "abc文字化けdef";
auto cpos = s.find(u32 'b');
auto spos = s.find(u32 "けd");