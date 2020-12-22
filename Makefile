# Makefile for PiDB
# Author: Greg Stewart

CXX      := gcc
CXXFLAGS := -Wall -g
LDFLAGS  := -L/usr/lib -Llib
BUILD    := ./build
SRC      := ./src
BIN      := ./bin
OBJ_DIR  := $(BUILD)/objects
INCLUDE  := -Iinclude/
SRC      :=                      \
   $(wildcard src/*.c)         \
   $(wildcard src/math/*.c) \

OBJECTS  := $(SRC:%.c=$(OBJ_DIR)/%.o)

all: mkdirs $(BUILD)/pidb

$(OBJ_DIR)/%.o: %.c
	@echo "Compiling: \"$<\" into \"$@\""
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

$(BUILD)/pidb: $(OBJECTS)
	@echo "Prereqs: ${OBJECTS}"
	$(CXX) $(CXXFLAGS) -o $(APP_DIR)/$(TARGET) $^ $(LDFLAGS)

.PHONY: all mkdirs clean

mkdirs:
	mkdir -p $(OBJ_DIR)


clean:
	rm -rvf $(BUILD)/*
