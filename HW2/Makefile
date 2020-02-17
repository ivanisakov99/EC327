#============================================================
override CXX = g++
override CXXFLAGS = -g -std=c++11 -Wall -Werror

Q1_SRC_DIR := ./question1
Q2_SRC_DIR := ./question2
Q3_SRC_DIR := ./question3

Q1_SRCS := $(shell find $(Q1_SRC_DIR) -name '*.cpp')
Q2_SRCS := $(shell find $(Q2_SRC_DIR) -name '*.cpp')
Q3_SRCS := $(shell find $(Q3_SRC_DIR) -name '*.cpp')

BUILD_DIR := ./build

Q1_OBJS := $(Q1_SRCS:$(Q1_SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
Q2_OBJS := $(Q2_SRCS:$(Q2_SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
Q3_OBJS := $(Q3_SRCS:$(Q3_SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

TARGETS := Q1 Q2 Q3

#============================================================
.PHONY: Q1 Q2 Q3 clean

all: $(TARGETS)

Q1: $(Q1_OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(BUILD_DIR)/$@

Q2: $(Q2_OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(BUILD_DIR)/$@

Q3: $(Q3_OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(BUILD_DIR)/$@

$(BUILD_DIR)/%.o: $(Q1_SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(Q2_SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(Q3_SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Implicit rules: $@ = target name, $< = first prerequisite name, $^ = name of all prerequisites
#============================================================

clean:
	rm -rf $(BUILD_DIR)
