#ifndef MAQUINITAS_RITMOS_H
#define MAQUINITAS_RITMOS_H

class MaquinitasRitmos {
  public:
    MaquinitasRitmos();

  void setTempo(float newTempo);
  float getTempo();

  private:
    float tempo;
};

#endif
