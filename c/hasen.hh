class Hase
{
  public:
  Hase();
  Hase(int fortpflanzung, int reife, int monateBisReife, int tod, int population, int wurfgroesse);
  ~Hase();

  int calc(const unsigned int monate);

  // getter und setter
  int getFortpflanzung(){return fortpflanzung;};
  int getReife(){return reife;};
  int getMonateBisReife(){return monateBisReife;};
  int getTod(){return tod;};
  int getPopulation(){return population;};
  int getWurfgroesse(){return wurfgroesse;};

  void setFortpflanzung(int val){fortpflanzung = val;};
  void setReife(int val){reife = val;};
  void setMonateBisReife(int val){monateBisReife = val;};
  void setTod(int val){tod = val;};
  void setPopulation(int val){population = val;};
  void setWurfgroesse(int val){wurfgroesse = val;};

  private:
  int fortpflanzung;
  int reife;
  int monateBisReife;
  int tod;
  int population;
  int wurfgroesse;
};
