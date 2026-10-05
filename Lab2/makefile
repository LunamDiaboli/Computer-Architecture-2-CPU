CXX = g++

# -std=c++11
# -Wall
# -I

CXXFLAGS = -std=c++11 -Wall -I.

TARGET = app

LIB_TARGET = libcalculator.a
LIB_SOURCES = calculator.cpp
LIB_OBJECTS = $(LIB_SOURCES:.cpp=.o)
APP_SOURCES = main.cpp
APP_OBJECTS = $(APP_SOURCES:.cpp=.o)

all : $(TARGET)

$(TARGET) : $(APP_OBJECTS) $(LIB_TARGET)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(APP_OBJECTS) -L. -lcalculator
	
$(LIB_TARGET) : $(LIB_OBJECTS)
	ar rcs $(LIB_TARGET) $(LIB_OBJECTS)
%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(TARGET) $(LIB_TARGET) $(LIB_OBJECTS) $(APP_OBJECTS)
