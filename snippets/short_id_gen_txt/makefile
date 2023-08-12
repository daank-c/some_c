CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRCS = main.cpp short_id_generator.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = gen_short_id

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create the short_ids directory
$(EXEC): | gen
gen:
	mkdir -p short_ids

clean:
	rm -rf $(OBJS) $(EXEC) short_ids