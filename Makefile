run: build
	@echo "Run our application now:"
	@./cmake-build-debug/cmake_cxx_demo

cmake:
	@cmake -B cmake-build-debug

build: cmake
	@make -C cmake-build-debug

all: clean run

clean:
	@test -d cmake-build-debug; rm -fr cmake-build-debug/
