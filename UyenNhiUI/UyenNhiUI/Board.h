#pragma once
#include <conio.h>
#include <string>
#include "Block.h"

using namespace std;

class Board{
    private:
        int rows;
        int cols;
        int cellSize;
        int updateTime;
        bool overState = false;
        
        Tetriminos* b = new S;
        Tetriminos* nextTetromino;
        void moveRowDown(int row, int rows);

    public:
        Board();
        vector<vector<Pixel>> board;
        void createBoard();
        void print();
        vector<vector<Pixel>> draw(bool drawOut);
        vector<vector<Pixel>> drawGhostPiece();
        void newTetriminos();
        void update(string move);
        
        Tetriminos* GetCurrentTetromino() {
            return b;
        }
        Tetriminos* GetNextTetromino() {
            return nextTetromino;
        }

        void clearRow(int row);
        bool isRowFull(int row);
        int clearFullRows();
        int updateScore(int lineDeleted);
        bool isOver();

        int score = 0;
};