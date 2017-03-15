#include <iostream>
#include <stdio.h>
#include <time.h>
#define EDGE 4 
using namespace std;
class board {
private:
	unsigned char frame[EDGE*EDGE] = { 0 }; //board for 2048 game
public:
	char operator[](int i) {
		return frame[i];
	}
	bool operator==(char *other_board) {
		for (int i = 0; i < EDGE*EDGE; i++) {
			if (frame[i] != other_board[i])return false;
		}
		return true;
	}
	void operator=(char *other_board) {
		for (int i = 0; i < EDGE*EDGE; i++) {
			frame[i] = other_board[i];
		}
	}

	void printBoard() {
		for (int i = 0; i < EDGE; i++) {
			for (int j = 0; j < EDGE; j++) {
				//if (board[4 * i + j] < 10)cout << ('0' + board[4 * i + j])<<" ";
				//else cout << ('A' + board[4 * i + j] - 10 ) << " ";
				printf("%c ", (frame[4 * i + j] < 10) ? '0' + frame[4 * i + j] : 'A' + frame[4 * i + j] - 10);
			}
			cout << endl;
		}
		cout << endl;
	}
};
class game2048 {
private:
	board board;
public:
		//constant for gravitate
		const char UP = 'w'; 
		const char DOWN = 's';
		const char LEFT = 'a';
		const char RIGHT = 'd';
		// the point gamer got
		long long unsigned point = 0;
	//method
		//constructor for initialize
		game2048(){
			
		}
		//sprout a new 2 or 4 at random 0 space
		bool sprout() {
			int count = 0; // count for 0 on board
			int randomNumber = 0;
			for (int i = 0; i < EDGE*EDGE; i++) {
				if (board[i] == 0)count++;
			}
			srand(time(NULL));


		}
		// to return is game over ?
		bool isGameOver() {
			for (int i = 0; i < EDGE*EDGE; i++) {
				if (board[i] == 0) {
					return false;
				}
			}
			return true;
		}
		void print() {
			board.printBoard();

		}
		
};

int main() {
	srand(time(NULL));
	game2048 newGame;
}