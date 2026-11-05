#include "Sculptor.cpp"
#include "Sculptor.h"

int main() {

Sculptor s(9, 22, 9);

s.setColor(0.0f, 0.0f, 1.0f, 0.5f);

s.putEllipsoid(4, 0, 4, 3, 2, 3);

s.putBox(4, 4, 2, 6, 4, 4);

s.putEllipsoid(4, 21, 4, 3, 15, 3);

s.cutEllipsoid(4, 21, 4, 3, 13, 3);

s.setColor(1.0f, 0.0f, 1.0f, 1.0f);

s.putEllipsoid(4, 21, 4, 3, 13, 3);

s.writeOFF("escultura.off");

std::cout << "Escultura gerada com sucesso!" << std::endl;

return 0;
}