CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRCS = main.cpp uuid_v4.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = gen_UUID

all: $(EXEC)

$(EXEC): $(OBJS) | gen
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create the uuids directory
gen:
	mkdir -p uuids

clean:
	rm -rf $(OBJS) $(EXEC) uuids