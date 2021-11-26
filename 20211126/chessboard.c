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
    EMPTY,
    VALID_MOVE,
} ChessPiece;

#define BOARD_SIZE 8

/**
 * @brief ChessRow is an array composed of 8 integers representing a row of the board 
 * 
 */
typedef int ChessRow[BOARD_SIZE];
/**
 * @brief ChessBoard is an array composed of 8 chessboard rows
 * 
 * @see ChessRow
 */
typedef ChessRow ChessBoard[BOARD_SIZE];
/**
 * @brief Pose represents the position of a piece in the board column first, row second
 * 
 */
typedef int Pose[2];

/**
 * @brief Global variables
 * 
 */
const Pose g_pawn_moves[] = {{0,1}, {0,2}, {1,1}, {-1,1}};
const Pose g_bishop_moves[] = {{1,1}, {2,2}, {3,3}, {4,4}, {5,5}, {6,6}, {7,7},
                               {-1,1}, {-2,2}, {-3,3}, {-4,4}, {-5,5}, {-6,6}, {-7,7},
                               {1,-1}, {2,-2}, {3,-3}, {4,-4}, {5,-5}, {6,-6}, {7,-7},
                               {-1,-1}, {-2,-2}, {-3,-3}, {-4,-4}, {-5,-5}, {-6,-6}, {-7,-7}};
const Pose g_knight_moves[] = {{2,1}, {2,-1}, {-2,1}, {-2,-1}, {1,2}, {1,-2}, {-1,2}, {-1,-2}};
const Pose g_rook_moves[] = {{1,0}, {2,0}, {3,0}, {4,0}, {5,0}, {6,0}, {7,0},
                             {0,1}, {0,2}, {0,3}, {0,4}, {0,5}, {0,6}, {0,7},
                             {0,-1}, {0,-2}, {0,-3}, {0,-4}, {0,-5}, {0,-6}, {0,-7},
                             {-1,0}, {-2,0}, {-3,0}, {-4,0}, {-5,0}, {-6,0}, {-7,0}};
const Pose g_queen_moves[] = {{1,1}, {2,2}, {3,3}, {4,4}, {5,5}, {6,6}, {7,7},
                              {-1,1}, {-2,2}, {-3,3}, {-4,4}, {-5,5}, {-6,6}, {-7,7},
                              {1,-1}, {2,-2}, {3,-3}, {4,-4}, {5,-5}, {6,-6}, {7,-7},
                              {-1,-1}, {-2,-2}, {-3,-3}, {-4,-4}, {-5,-5}, {-6,-6}, {-7,-7},
                              {1,0}, {2,0}, {3,0}, {4,0}, {5,0}, {6,0}, {7,0},
                              {0,1}, {0,2}, {0,3}, {0,4}, {0,5}, {0,6}, {0,7},
                              {0,-1}, {0,-2}, {0,-3}, {0,-4}, {0,-5}, {0,-6}, {0,-7},
                              {-1,0}, {-2,0}, {-3,0}, {-4,0}, {-5,0}, {-6,0}, {-7,0}};
const Pose g_king_moves[] = {{0,1}, {1,0}, {1,1}, {0,-1}, {-1,0}, {-1,-1}, {-1,1}, {1,-1}};

const Pose* g_available_moves[] = {g_pawn_moves, g_bishop_moves, g_knight_moves, g_rook_moves, g_queen_moves, g_king_moves};
const unsigned int g_move_sizes[] = {sizeof(g_pawn_moves)/sizeof(g_pawn_moves[0]),
                                     sizeof(g_bishop_moves)/sizeof(g_bishop_moves[0]),
                                     sizeof(g_knight_moves)/sizeof(g_knight_moves[0]),
                                     sizeof(g_rook_moves)/sizeof(g_rook_moves[0]),
                                     sizeof(g_queen_moves)/sizeof(g_queen_moves[0]),
                                     sizeof(g_king_moves)/sizeof(g_king_moves[0])}; 

/**
 * @brief Print on screen the pieces currently on the chessboard
 * 
 * @param chessboard is an integer matrix representing the board 
 */
void printChessboard(ChessBoard chessboard) {
    printf("+-+-+-+-+-+-+-+-+\n");
    for (size_t i = 0; i < BOARD_SIZE; i++)
    {
        for (size_t j = 0; j < BOARD_SIZE; j++)
        {
            /* code */
            printf("|%d", chessboard[j][i]);
        }
        printf("|\n");
        printf("+-+-+-+-+-+-+-+-+\n");
    }  
}


/**
 * @brief Provides available moves depending on the chess piece
 * 
 * @param[in] piece is the chess piece to be considered
 * @param[out] available_moves provides the available moves of the piece starting from the current position
 * @param[out] n_moves the actual number of available moves
 * @return true 
 * @return false 
 */
bool availableMoves(ChessPiece piece, const Pose** available_moves, int *n_moves){
    switch (piece)
    {
    case PAWN:
    case BISHOP:
    case KNIGHT:
    case ROOK:
    case QUEEN:
    case KING:
        *available_moves = g_available_moves[piece];
        *n_moves = g_move_sizes[piece];
        return true;
        break;
    
    default:
        break;
    }
    return false;
}

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
bool canMove(ChessBoard chessboard, Pose current_pose, ChessPiece piece, Pose valid_moves[], int *n_moves){
    const Pose* available_moves;
    int n_available_moves = 0;
    if (!((current_pose[0] >= 0 && current_pose[0] < BOARD_SIZE) && (current_pose[1] >= 0 && current_pose[1] < BOARD_SIZE)))
        return false;

    chessboard[current_pose[0]][current_pose[1]] = piece;

    if (availableMoves(piece, &available_moves, &n_available_moves)) {
        int valid_index = 0;
        for (int i = 0; i < n_available_moves; i++) {
            int new_col = current_pose[0] + available_moves[i][0];
            int new_row = current_pose[1] + available_moves[i][1];
            if ((new_col >= 0 && new_col < BOARD_SIZE) && (new_row >= 0 && new_row < BOARD_SIZE)) {
                // Valid
                valid_moves[valid_index][0] = new_col;
                valid_moves[valid_index][1] = new_row;
                valid_index++;
                chessboard[new_col][new_row] = VALID_MOVE;
            }
        }
        *n_moves = valid_index; 
        return (valid_index >0);
    }
    else {
        return false;
    }
}

/**
 * @brief Main function
 * 
 * @return int 
 */
int main() {
    ChessBoard chessboard = {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                             EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                             EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                             EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                             EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                             EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                             EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY,
                             EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY};

    Pose current_pose = {3,3};
    ChessPiece piece = PAWN;
    const int max_moves = 63;
    int n_moves;
    Pose valid_moves[max_moves];

    if(canMove(chessboard, current_pose, piece, valid_moves, &n_moves)) {
        printChessboard(chessboard);
    } else {
        printf("No valid moves available\n");
    }

    return 0;
}