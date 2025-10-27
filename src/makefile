CXX = g++
CXXFLAGS = -std=c++17 -Wall

SRCS = principal.cc Board.cc pawns/Pawn.cc pawns/Bomb.cc pawns/Flag.cc pawns/Miner.cc pawns/Scout.cc pawns/Spy.cc
OBJS = $(SRCS:.cc=.o)
TARGET = stratego

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

principal.o: principal.cc Board.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Board.o: Board.cc Board.h pawns/Pawn.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

pawns/Pawn.o: pawns/Pawn.cc pawns/Pawn.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

pawns/Bomb.o: pawns/Bomb.cc pawns/Bomb.h pawns/Pawn.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

pawns/Flag.o: pawns/Flag.cc pawns/Flag.h pawns/Pawn.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

pawns/Miner.o: pawns/Miner.cc pawns/Miner.h pawns/Pawn.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

pawns/Scout.o: pawns/Scout.cc pawns/Scout.h pawns/Pawn.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

pawns/Spy.o: pawns/Spy.cc pawns/Spy.h pawns/Pawn.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)