# NIM

## Compile on Windows

nim c --cc:gcc --threads:on --tlsEmulation:off --app:lib --out:mymodule.pyd mymodule
nim c -r mymodule
c           ->  compile
--run or -r -> run compiled exe (if its an app)

--cc        -> cross compiler
:vcc        -> microscoft visual c compiler
:gcc        -> gcc compiler
:llvm-gcc   ->
:clang      -> clang compiler

--cpu      -> what cpu architecture
:amd64      -> 64-bit
:i386       -> x86 32-bit

--os
:linux

--app       -> output type (console app, gui, dynamic lib, static lib)
:lib        -> dynamic lib (DLL)

-out: or -o:  -> name of output file

-d
:release  -> optimise for release
:mingw    -> cross compile for windows

finally, name of .nim file to compile

## CYTHON

Create compile.py that cythonizes .py(x)
    python compile.py build_ext --inplace   --> xxx.c, xxx.platform.so/.pyd
