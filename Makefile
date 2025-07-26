CXX = g++
CXXFLAGS = -Wall -std=c++11
SRC = $(wildcard *.cpp)
BIN_DIR = bin
EXE = $(SRC:.cpp=)

all: $(EXE)

%: %.cpp
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $(BIN_DIR)/$@

clean:
	rm -rf $(BIN_DIR)
	@echo "🧹 Proyecto limpio ✔"
