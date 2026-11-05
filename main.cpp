#include "Sculptor.cpp"
#include "Sculptor.h"

int main() {

Sculptor s(18, 42, 18);

s.setColor(0.0f, 0.0f, 1.0f, 0.5f);

s.putEllipsoid(8, 0, 8, 6, 4, 6);

s.putBox(8, 8, 4, 12, 8, 8);

s.putEllipsoid(8, 42, 8, 6, 30, 6);

s.cutEllipsoid(8, 42, 8, 6, 26, 6);

s.setColor(1.0f, 0.0f, 1.0f, 1.0f);

s.putEllipsoid(8, 42, 8, 6, 26, 6);

s.writeOFF("escultura.off");

std::cout << "Escultura gerada com sucesso!" << std::endl;

return 0;
}