# --- General Variables ---
CC = gcc
CFLAGS = -Isrc -Itests/Unity -Wall -g

# --- Directories ---
SRC_DIR = src
TEST_DIR = tests
UNITY_DIR = $(TEST_DIR)/Unity

# --- Files ---
SRC_FILES = $(SRC_DIR)/functions.c
TEST_FILES = $(TEST_DIR)/test_functions.c $(TEST_DIR)/TestRunner.c
UNITY_FILES = $(UNITY_DIR)/unity.c

# --- Targets ---
TEST_EXECUTABLE = test_suite

.PHONY: test clean

test: $(TEST_EXECUTABLE)
	./$(TEST_EXECUTABLE)

$(TEST_EXECUTABLE): $(TEST_FILES) $(UNITY_FILES) $(SRC_FILES)
	$(CC) $(CFLAGS) $^ -o $(TEST_EXECUTABLE)

clean:
	rm -f $(TEST_EXECUTABLE)