class BaseballPlayer
{
  private:
    double hit;
    double bat;
    double strike;
  public:
    BaseballPlayer();
    BaseballPlayer(double);
    void setHit(double);
    void setBat(double);
    void setStrike(double);
    double getHit() const;
    double getBat() const;
    double getStrike() const;
    double getbattin_average() const;
    
};