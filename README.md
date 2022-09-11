## How to use

### Debian / Ubuntu / Pop OS / Linux Mint required packages:

```sudo apt install -y libsdl2-dev cmake git gcc-10 g++-10 gdb clang```

### Arch / Manjaro required packages:

```sudo pacman -S --needed base-devel git cmake gdb sdl2 clang```

### Fedora required packages:

```sudo dnf install gcc-g++ gdb SDL2-devel cmake git clang```

### OpenSUSE required packages:

```sudo zypper install gcc gdb SDL2-devel cmake git llvm-clang llvm-gold```

```sh
git clone https://github.com/auriumfps/aurium
cd aurium
chmod +x toolbox.sh
./toolbox.sh -p -u -b -l # pull, unload, build and then load, use -h for help
```


## Basic toolbox.sh usage

| Argument           | Description                             |
| ------------------ | --------------------------------------- |
| -u (--unload)      | Unload                                  |
| -l (--load)        | Load                                    |
| -ld (--load_debug) | Load and debug via gdb                  |
| -b (--build)       | Build to the build/ dir                 |
| -bd (--build_debug)| Build to the build/ dir as debug        |
| -p (--pull)        | Update                                  |
| -h (--help)        | Show help                               |

All args are executed in the order they are written in, for example, "-u -b -l" would unload, build it, and then load it back.