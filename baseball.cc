void BaseballPlayer::setHit(double)
{
  hit = 1;
}

void BaseballPlayer::setBat(double)
{
  bats = 2;
}

void BaseballPlayer::setStrike(double)
{
  strike = 3;
}

double BaseballPlayer::getHit() const
{
  return hit;
}

double BaseballPlayer::getBat() const
{
  return bat;
}

double BaseballPlayer::getStrike() const
{
  return strike;
}

double BaseballPlayer::getbatting_average() const
{
  return hit / bat;
}