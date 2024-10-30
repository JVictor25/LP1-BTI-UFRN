#ifndef CIRCULO_HPP
#define CIRCULO_HPP
class Complexo {
 private:
 double z;
 double zi;

 public:

 Complexo(double h, double m);
 Complexo& operator= (Complexo const &c);
 friend std::ostream& operator<< (std::ostream &o, Complexo const &c);
 Complexo operator+ (Complexo &c);
 Complexo operator- (Complexo &c);
 Complexo operator* (Complexo &c);
 Complexo operator| (Complexo &c);
};
#endif
