SOURCE_DIR = .
BUILD_DIR = build
CMAKE = cmake
CMAKE_GENERATOR = -G Ninja

.PHONY: default help prepare configure build clean

default: build

help:
	@echo "make prepare   - Create build directory"
	@echo "make configure - Generate CMake build files"
	@echo "make build     - Build project" 
	@echo "make clean     - Remove build directory"

prepare:
	@mkdir -p $(BUILD_DIR)

configure: prepare
	$(CMAKE) -S $(SOURCE_DIR) -B $(BUILD_DIR) $(CMAKE_GENERATOR)

build:
	$(CMAKE) --build $(BUILD_DIR)

clean:
	@rm -rf $(BUILD_DIR)
