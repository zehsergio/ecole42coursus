
# Shortcuts for debug with GDB and LLDB

## GDB - Ubuntu
```
compiler: cc -g					#compile tag
gdb "<file-name-compiled>"		#run gdb					
b "main"						#create a breakpoint ('main' in this example)
ctrl + x + a					#run debug mode
run								#run debug
n 								# next 
s 	 							# step; enter to the function
p = print test[] | p test		# print
```

## LLDB - MacOSX

```
lldb ./tests
(lldb) break set -n <function-name>		# or: b ft_isalpha
(lldb) run
(lldb) next 	                   		# step over
(lldb) step                      		# step into
(lldb) finish                    		# step out
(lldb) frame variable            		# show locals
(lldb) p i                       		# print expression
(lldb) p (char)c                 		# print char (variable is 'c' in this example)
(lldb) bt                      			# backtrace
```