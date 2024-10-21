class Wektor2D
{
  double x;
  double y;
  
  public:
  //initalizers
    Wektor2D() {x = 0.; y = 0.;}
    Wektor2D(double nx, double ny) {x = nx; y = ny;}
  // getters
    double getX() {return x;}
    double getY() {return y;}
  // setters
    void setX(double nx) {x = nx;}
    void setY(double ny) {y = ny;}
};

// add operator

Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
  return Wektor2D{v1.getX() + v2.getX(), v1.getY() + v2.getY()};
}

double operator*(Wektor2D v1, Wektor2D v2)
{
  return v1.getX() * v2.getX() + v1.getY() * v2.getY();
}

// dp operator
