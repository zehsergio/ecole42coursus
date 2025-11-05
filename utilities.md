
Shortcuts for debug with GDB and LLDB.

compiler: cc -g.
gdb "./a.out".
b "main".
ctrl + x + a.
run.
n = next.
s = enter to the function.
p = print test[] | p test.


LLDB for MacOSX:.

lldb ./tests.
(lldb) break set -n ft_isalpha   # or: b ft_isalpha.
(lldb) run.
(lldb) next                      # step over.
(lldb) step                      # step into.
(lldb) finish                    # step out.
(lldb) frame variable            # show locals.
(lldb) p i                       # print expression.
(lldb) p (char)c                 # print char.
(lldb) bt                        # backtrace.