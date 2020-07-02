# README

## QuickStart

```shell

cmake -B cmake-build-debug

make -C cmake-build-debug/ 

make -C cmake-build-debug/ clean
```

## Test with It

```shell
./cmake-build-debug/cmake_cxx_demo
Run our application now:
****************************************
Hello World, 2020!
Demo object is being created
My name is: Zhou Yuanzhen
Demo object is being deleted
****************************************
```

## Use Makefile

```shell
echo "All in one mode"
make all

echo "Generate CMake project"
make cmake

echo "Build the lib and executable application"
make build

echo "Run and test our application"
make run
```
