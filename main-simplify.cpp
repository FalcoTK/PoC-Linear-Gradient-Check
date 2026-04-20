#include <iostream>
#include <string>

#include <iostream>
#include <string>

// Define a structure to hold X and Y coordinates
struct Location {
    int x;
    int y;
};

struct ChessPiece {
    std::string name;
    Location pos;
};

ChessPiece getPieceData(int index) {
    // simplefy data
    ChessPiece board[32] = {
        {"BentengHitam1", {4, 1}}, // Index 0
        {"RajaPutih", {4, 5}},     // Index 1
        {"RatuHitam", {2, 2}},     // Index 2
        {"PrajuritPutih1", {2, 2}},// Index 3
    };

    if (index >= 0 && index < 32) {
        return board[index];
    }
    return {"Kosong", {0, 0}}; // Return empty if index is out of bounds
}

bool GradientCheck(int index1, int index2) {
    ChessPiece piece1 = getPieceData(index1);
    ChessPiece piece2 = getPieceData(index2);

    if (piece1.pos.y - piece2.pos.y == 0 && piece1.pos.x - piece2.pos.x == 0) {
        return true;
    };
    return false;
}

bool LinearCheck(int index1, int index2) {
    ChessPiece piece1 = getPieceData(index1);
    ChessPiece piece2 = getPieceData(index2);

    if (piece1.pos.y - piece2.pos.y == 0 || piece1.pos.x - piece2.pos.x == 0) {
        return true;
    };
    return false;
}



int main() {
    int index1, index2;
    std::cout << "Masukkan indeks pertama (0-31): ";
    std::cin >> index1;
    std::cout << "Masukkan indeks kedua (0-31): ";
    std::cin >> index2;

    if (GradientCheck(index1, index2)) {
        std::cout << "Kedua bidak berada pada posisi yang sama. (GradientCheck = True)" << std::endl;
    } else if (LinearCheck(index1, index2)) {
        std::cout << "Kedua bidak berada pada garis yang sama (horizontal atau vertikal). (LinearCheck = True)" << std::endl;
    } else {
        std::cout << "Kedua bidak tidak berada pada posisi yang sama atau garis yang sama." << std::endl;
    }
    return 0;
}

bool GradientCheck(int index1, int index2) {
    ChessPiece piece1 = getPieceData(index1);
    ChessPiece piece2 = getPieceData(index2);

    if (piece1.pos.y - piece2.pos.y == 0 || piece1.pos.x - piece2.pos.x == 0) {
        return true;
    };
    return false;
}

bool LinearCheck(int index1, int index2) {
    ChessPiece piece1 = getPieceData(index1);
    ChessPiece piece2 = getPieceData(index2);

    if (piece1.pos.y - piece2.pos.y == 0 || piece1.pos.x - piece2.pos.x == 0) {
        return true;
    };
    return false;
}



int main() {
    int index1, index2;
    std::cout << "Masukkan indeks pertama (0-31): ";
    std::cin >> index1;
    std::cout << "Masukkan indeks kedua (0-31): ";
    std::cin >> index2;

    if (GradientCheck(index1, index2)) {
        std::cout << "Kedua bidak berada pada posisi yang sama." << std::endl;
    } else if (LinearCheck(index1, index2)) {
        std::cout << "Kedua bidak berada pada garis yang sama (horizontal atau vertikal)." << std::endl;
    } else {
        std::cout << "Kedua bidak tidak berada pada posisi yang sama atau garis yang sama." << std::endl;
    }
    return 0;
}
