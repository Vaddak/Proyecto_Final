#include "body.h"



body::body(float posX, float posY, float VelX, float VelY, float masa, float radio_, float K_, float e_)
{
  PX = posX;
  PY = posY;
  mass = masa;
  R = radio_;
  VX = VelX;
  VY = VelY;
  AX = 0;
  AY = 0;
  G = 10;
  K = K_;
  e = e_;
  dt = 0.1;
}

body::~body()
{

}


float body::get_PosX(){
  return PX;
}

float body::get_PosY(){
  return PY;
}

float body::get_Radio(){
  return R;
}

float body::get_e(){
  return e;
}

float body::get_VelX(){
  return VX;
}

float body::get_VelY()
{
  return VY;
}

float body::get_masa(){
  return mass;
}

void body::set_vel(float velx, float vely, float px, float py){
  VX = velx;
  VY = vely;
  PX = px;
  PY = py;

}

void body::actualizar()
{
  V =  pow(((VX*VX)+(VY*VY)),1/2);
  angulo = atan2(VY,VX);
  AX = -((K*(V*V)*(R*R))/mass)*cos(angulo);
  AY = (-((K*(V*V)*(R*R))/mass)*sin(angulo))-G;
  PX = PX + (VX*dt) + ((AX*(dt*dt))/2);
  PY = PY + (VY*dt) + ((AY*(dt*dt))/2);
  VX = VX + AX*dt;
  VY = VY + AY*dt;


}












