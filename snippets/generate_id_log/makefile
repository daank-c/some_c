CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRCS = main.cpp short_id_generator.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = gen_id_log

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create the id_log directory
$(EXEC): | gen
gen:
	mkdir -p id_log

clean:
	rm -rf $(OBJS) $(EXEC) id_log