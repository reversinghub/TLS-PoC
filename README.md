# TLS-PoC

PoC for using TLS in Win8.1 and above

```
████████╗██╗     ███████╗    ██████╗  ██████╗  ██████╗
╚══██╔══╝██║     ██╔════╝    ██╔══██╗██╔═══██╗██╔════╝
   ██║   ██║     ███████╗    ██████╔╝██║   ██║██║     
   ██║   ██║     ╚════██║    ██╔═══╝ ██║   ██║██║     
   ██║   ███████╗███████║    ██║     ╚██████╔╝╚██████╗
   ╚═╝   ╚══════╝╚══════╝    ╚═╝      ╚═════╝  ╚═════╝
```
   
how to execute code before the entry point of the application and before the main function and confuse some debuggers along the way. Let's begin.

Analysis tools:

- Immunity debugger
- CFF Explorer 
- LordPE
- IDA Pro
- Visual studio IDE

### References

* [Thread Local Storage - Win32](https://docs.microsoft.com/en-us/windows/win32/procthread/thread-local-storage)
* [Using C/C++ TLS callbacks in Visual Studio with your 32 or 64bits programs](http://lallouslab.net/2017/05/30/using-cc-tls-callbacks-in-visual-studio-with-your-32-or-64bits-programs/)
* [Thread Local Storage, part 3: Compiler and linker support for implicit TLS](http://www.nynaeve.net/?p=183)
