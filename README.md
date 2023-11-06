# dynamic_library
This repository shows an example of using dynamic (or shared) libraries in C++. We will use CMake and Visual Studio on Windows operating system.<br>
Specifically, animal is the library dynamically used by use_animal.

Instructions:
<pre>
	Open CMake:
		source code: ./animal
		binaries: ./animal/build
		generate Visual Studio solution

	Open Visual Studio:
		build solution
		animal.dll is created in ./animal/build/Debug

	Open CMake:
		source code: ./use_animal
		binaries: ./use_animal/build
		generate Visual Studio solution

	Open Visual Studio:
		build solution
		use_animal.exe is created in ./use_animal/build/Debug

	Copy animal.dll in ./use_animal/build/Debug
	Open the terminal and run use_animal.exe
</pre>
