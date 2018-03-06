CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = Qmain.o queue.o
TARGET =Qmain


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
Qmain.o:Qmain.cpp queue.h queue.cpp
	$(CXX) $(CXXFLAGS) Qmain.cpp
Queue.o: queue.cpp
	$(CXX) $(CXXFLAGS) Queue.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)

