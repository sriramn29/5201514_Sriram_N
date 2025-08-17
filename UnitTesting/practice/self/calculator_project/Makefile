# --- General Variables ---
CC = gcc
CFLAGS = -Isrc -Itests/Unity -Wall -g

# --- Source and Build Directories ---
SRC_DIR = src
TEST_DIR = tests
UNITY_DIR = $(TEST_DIR)/Unity
BUILD_DIR = build

# --- Files ---
SRC_FILES = $(SRC_DIR)/calculator.c $(SRC_DIR)/main.c
TEST_FILES = $(TEST_DIR)/test_calculator.c $(TEST_DIR)/TestRunner.c
UNITY_FILES = $(UNITY_DIR)/unity.c

# --- Targets ---
EXECUTABLE = my_program
TEST_EXECUTABLE = test_suite

.PHONY: all clean test

all: $(EXECUTABLE)

$(EXECUTABLE): $(SRC_FILES)
	$(CC) $(CFLAGS) $^ -o $(EXECUTABLE)

test: $(TEST_EXECUTABLE)
	./$(TEST_EXECUTABLE)

$(TEST_EXECUTABLE): $(TEST_FILES) $(UNITY_FILES) $(SRC_DIR)/calculator.c
	$(CC) $(CFLAGS) $^ -o $(TEST_EXECUTABLE)

run: all
	./my_program

clean:
	rm -f $(EXECUTABLE) $(TEST_EXECUTABLE)
	rm -f $(BUILD_DIR)/*.o