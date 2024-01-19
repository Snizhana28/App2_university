#include "Pair.h"
#include <ostream>
class Rightangled : public Pair
{
public:
	Rightangled(double x, double y) : Pair(x, y) {}

    double calculateHypotenuse() const {
        return sqrt(first * first + second * second);
    }

    double calculateArea() const {
        return 0.5 * first * second;
    }

    Rightangled operator+(const Rightangled& other) const {
        return Rightangled(first + other.first, second + other.second);
    }

    Rightangled operator*(double scalar) const {
        return Rightangled(first * scalar, second * scalar);
    }

    friend ostream& operator<<(ostream& os, const Pair& obj){
        os << "(" << obj.getFirst() << ", " << obj.getSecond() << ")";
        return os;
    }
};

