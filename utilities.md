
// Shortcuts for debug with GDB and LLDB <br>

compiler: cc -g <br>
gdb "./a.out" <br>
b "main" <br>
ctrl + x + a <br>
run <br>
n = next <br>
s = enter to the function <br>
p = print test[] | p test <br>


LLDB for MacOSX: <br>

lldb ./tests <br>
(lldb) break set -n ft_isalpha   # or: b ft_isalpha <br>
(lldb) run <br>
(lldb) next                      # step over <br>
(lldb) step                      # step into <br>
(lldb) finish                    # step out <br>
(lldb) frame variable            # show locals <br>
(lldb) p i                       # print expression <br>
(lldb) p (char)c                 # print char <br>
(lldb) bt                        # backtrace <br>