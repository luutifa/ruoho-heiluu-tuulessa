# Ruoho heiluu tuulessa äänettä

A demo released at Instanssi 2018

Binary requires a modern 64-bit GNU/Linux (libc.so.6), OpenGL 3.3 and SDL 2.0

Recommended Intel Ivy Bridge Core i5 M-line processor and HD Graphics 4000 GPU

## Building

Install dependencies

- a C++11 compiler (and a linker with -static-libstdc++ support ?)
- SDL2.0 and headers
- OpenGL drivers and headers (probably satisfied by installing sdl2)
- GLM (OpenGL Mathematics)

Make a build directory (if doesn't exist) and cd to it

```
mkdir release
cd release
```

Run cmake and if its successful, run make

```
cmake ..
make -j $(( $(nproc) + 1 )) -l $(nproc)
```

Get the rocket track files and music.ogg from the demo release package
<https://files.scene.org/view/parties/2018/instanssi18/demo/mfsck_ruoho_heiluu_tuulessa.tar.gz>

