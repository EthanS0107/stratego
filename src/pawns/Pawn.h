#ifndef __PAWN_H__
#define __PAWN_H__
#include <string>
#include <array>
class Pawn { 
    private:   
        std::string name;
        int rank;
        int x;
        int y;
        bool movable;
        std::string color;
        bool alive;
        char symbol;
        
    public:
        // Utiliser inline static (C++17+) permet l'initialisation en-class pour les types non-intégraux.
        // Rendu public pour y accéder depuis d'autres unités de traduction : Pawn::LIST_NAMES
        inline static const std::array<std::string, 12> LIST_NAMES = {"flag", "spy", "scout", "miner", "sergeant", "lieutenant", "captain", "major", "colonel", "general", "marshal", "bomb"};
        inline static const std::array<std::string, 2> LIST_COLORS = {"blue","red"};
        Pawn();  // Constructeur par défaut
        Pawn(const std::string& name, int rank, bool movable = true);  // Constructeur sans couleur
        Pawn(const std::string& name, int rank, const std::string& color, bool movable = true);  // Constructeur complet
        std::string getName() const;
        int getRank() const;
        int getX() const;
        int getY() const;
        std::string getColor() const;
        bool isAlive() const;
        bool isMovable() const;
        void setX(int);
        void setY(int);
        void kill();
        void moveTo(int, int);
        char getSymbol() const;
};

#endif // __PAWN_H__