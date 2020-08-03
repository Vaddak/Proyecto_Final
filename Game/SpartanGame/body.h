#ifndef BODY_H
#define BODY_H
#include <math.h>
#include <cmath>

class body
{
public:
  body(float posX, float posY, float VelX, float VelY, float masa, float radio_, float K_, float e_);
  ~body();
  float get_PosX();
  float get_PosY();
  float get_Radio();
  float get_e();
  float get_VelX();
  float get_VelY();
  float get_masa();
  void set_vel(float velx, float vely, float px, float py);
  void actualizar();

private:
  float PY;
  float PX;
  float mass;
  float R;
  float VY;
  float VX;
  float angulo;
  float AX; //aceleracion en x
  float AY; //aceleracion en y
  float G; //gravedad
  float K; //resistencia del aire
  float e; //coeficiente de restitucion
  float V; //vector de velocidad
  float dt; //delta de tiempo

};

#endif // BODY_H
