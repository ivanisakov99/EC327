#============================================================
override CXX = g++
override CXXFLAGS = -g -std=c++11 -Wall -Werror

P1_SRC_DIR := ./problem1
P2_SRC_DIR := ./problem2
P3_SRC_DIR := ./problem3
OP3_SRC_DIR := ./optional_problem3

P1_SRCS := $(shell find $(P1_SRC_DIR) -name '*.cpp')
P2_SRCS := $(shell find $(P2_SRC_DIR) -name '*.cpp')
P3_SRCS := $(shell find $(P3_SRC_DIR) -name '*.cpp')
OP3_SRCS := $(shell find $(OP3_SRC_DIR) -name '*.cpp')

BUILD_DIR := ./build

P1_OBJS := $(P1_SRCS:$(P1_SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
P2_OBJS := $(P2_SRCS:$(P2_SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
P3_OBJS := $(P3_SRCS:$(P3_SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
OP3_OBJS := $(OP3_SRCS:$(OP3_SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

TARGETS := P1 P2 P3 OP3

#============================================================
.PHONY: P1 P2 P3 OP3 clean

all: $(TARGETS)

P1: $(P1_OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(BUILD_DIR)/$@

P2: $(P2_OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(BUILD_DIR)/$@

P3: $(P3_OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(BUILD_DIR)/$@

OP3: $(OP3_OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(BUILD_DIR)/$@

$(BUILD_DIR)/%.o: $(P1_SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(P2_SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(P3_SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(OP3_SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Implicit rules: $@ = target name, $< = first prerequisite name, $^ = name of all prerequisites
#============================================================

clean:
	rm -rf $(BUILD_DIR)
