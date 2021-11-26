#include <stdio.h>
#include <stdbool.h>

/**
 * @brief Enum the different pieces that can be used inside a chessboard
 * 
 */
typedef enum {
    PAWN = 0,
    BISHOP,
    KNIGHT,
    ROOK,
    QUEEN,
    KING,
} ChessPiece;

/**
 * @brief ChessRow is an array composed of 8 integers representing a row of the board 
 * 
 */
typedef int ChessRow[8];
/**
 * @brief ChessBoard is an array composed of 8 chessboard rows
 * 
 * @see ChessRow
 */
typedef ChessRow ChessBoard[8];
/**
 * @brief Pose represents the position of a piece in the board column first, row second
 * 
 */
typedef int Pose[2];

/**
 * @brief Global variables
 * 
 */

/**
 * @brief Print on screen the pieces currently on the chessboard
 * 
 * @param chessboard is an integer matrix representing the board 
 */
void printChessboard(ChessBoard chessboard);

/**
 * @brief Check if a chess piece can be moved starting from the current position
 * 
 * @param[in] chessboard is an integer matrix representing the board 
 * @param[in] current_pose is an integer pair representing the current position within the board
 * @param[in] piece is the chess piece to be considered
 * @param[out] valid_moves provides the valid moves of the piece starting from the current position
 * @param[in,out] n_moves in input gives the maximum number of elements for moves, in output the actual number of available moves
 * @return true if at least a valid move exists
 * @return false if no valid move exists
 */
bool canMove(ChessBoard chessboard, Pose current_pose, ChessPiece piece, Pose valid_moves[], int *n_moves);

/**
 * @brief Provides available moves depending on the chess piece
 * 
 * @param[in] piece is the chess piece to be considered
 * @param[out] available_moves provides the available moves of the piece starting from the current position
 * @param[in,out] n_moves in input gives the maximum number of elements for moves, in output the actual number of available moves
 * @return true 
 * @return false 
 */
bool availableMoves(ChessPiece piece, Pose *available_moves, int *n_moves);

/**
 * @brief Main function
 * 
 * @return int 
 */
int main() {
    
    return 0;
}