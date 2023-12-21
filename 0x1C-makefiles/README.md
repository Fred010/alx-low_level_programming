# 0x1C. C - Makefiles
Makefiles are used to help decide which parts of a large program need to be recompiled

`The __make__ utility requires a file, __Makefile__ (or makefile)` which defines set of tasks to be executed

say_hello:
        echo "Hello World"

Using the TAB approach to indent:
target: prerequisites
<TAB> recipe
